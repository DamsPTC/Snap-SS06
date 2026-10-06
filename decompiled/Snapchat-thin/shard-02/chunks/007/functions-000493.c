/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102109cc8; end: 102109d0b;  */

void FUN_102109cc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e590d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ba1f8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e590d0 = puVar1;
  return;
}



/* Entry: 102109d0c; end: 10210a04f;  */

/* WARNING: Possible PIC construction at 0x000102109e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102109e44) */

void FUN_102109d0c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar3 = 0xef68736572666572;
      uVar4 = 0x5f6f745f6c6c7570;
    }
    else if (param_1 == 1) {
      uVar3 = 0xef6574616470755f;
      uVar4 = 0x6369646f69726570;
    }
    else {
      if (param_1 != 2) {
LAB_102109e88:
        lStack_48 = param_1;
        func_0x000107c60614(&UNK_1104cc1f0,&lStack_48,&UNK_1104cc1f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102109eac);
        (*pcVar1)();
      }
      uVar3 = 0xe90000000000006e;
      uVar4 = 0x65706f5f74616863;
    }
  }
  else if (param_1 == 3) {
    uVar3 = 0x800000010f062750;
    uVar4 = 0xd00000000000001c;
  }
  else if (param_1 == 4) {
    uVar3 = 0x800000010f062720;
    uVar4 = 0xd000000000000021;
  }
  else {
    if (param_1 != 5) goto LAB_102109e88;
    uVar4 = 0xd000000000000010;
    uVar3 = 0x800000010f062700;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000105bdf754(uVar2,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10210a050; end: 10210a093;  */

void FUN_10210a050(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10210a094; end: 10210a0ab; -[_TtC45MapContextInFriendsFeedServicesImplementation30MapContextInFriendsFeedManager delegate] */

void FUN_10210a094(long param_1)

{
  func_0x000107c61618(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10210a0ac; end: 10210a0b7; -[_TtC45MapContextInFriendsFeedServicesImplementation30MapContextInFriendsFeedManager setDelegate:] */

void FUN_10210a0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10210a0b8; end: 10210a31f;  */

void FUN_10210a0b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  FUN_10210ab54();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_10210acec();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010210ae3c();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        FUN_10210f818();
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 7;
        *(undefined8 *)(lVar3 + 0x10) = 3;
        uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
        *(undefined8 *)(lVar3 + 0x20) = uVar10;
        *(long *)(lVar3 + 0x28) = lVar1;
        *(long *)(lVar3 + 0x30) = lVar2;
        func_0x0001000285a8(0x112e59298,&UNK_10da5dac0);
        func_0x000107c6157c(uVar10);
        func_0x000107c6157c(lVar1);
        func_0x000107c6157c(lVar2);
        lVar4 = lVar3;
        func_0x0001000c19f0(lVar3);
        func_0x000107c61574(lVar3);
        lVar3 = lVar4;
        func_0x0001006c733c(lVar4);
        pcVar5 = FUN_10210afa8;
        func_0x0001000c0ebc(FUN_10210afa8,0);
        func_0x000107c61574(lVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
        func_0x000100471e0c(uVar6,1);
        func_0x000107c61574(pcVar5);
        puVar9 = &UNK_1104cbdc0;
        puVar7 = puVar9;
        func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        puVar8 = &UNK_1104cbde8;
        func_0x000107c613fc(&UNK_1104cbde8,0x20,7);
        *(code **)(puVar8 + 0x10) = FUN_10210daa4;
        *(undefined **)(puVar8 + 0x18) = puVar7;
        uVar10 = 0x112e59280;
        func_0x0001000285a8(0x112e59280,&UNK_10da5dab0);
        pcVar5 = FUN_10210daac;
        func_0x00010068b194(FUN_10210daac,puVar8,uVar10);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(puVar8);
        func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
        func_0x000107c61644(puVar9 + 0x10);
        func_0x0001000bfde0(FUN_10210dadc,puVar9,uVar10);
        func_0x000107c61574(param_1);
        func_0x000107c61574(lVar1);
        func_0x000107c61574(lVar2);
        func_0x000107c61574(lVar4);
        func_0x000107c61574(pcVar5);
        func_0x000107c61574(puVar9);
        return;
      }
      func_0x000107c61574(param_1);
      param_1 = lVar1;
    }
    func_0x000107c61574(param_1);
  }
  func_0x0001000285a8(0x112e59290,&UNK_10da5dab8);
  func_0x000104886440();
  return;
}



/* Entry: 10210a320; end: 10210a377;  */

void FUN_10210a320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x00010210dfc4(0,0x112d5ecc8,&PTR_PTR_1126cd678);
  func_0x000107c5f9dc(uVar2,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  *param_1 = uVar2;
  return;
}



/* Entry: 10210a378; end: 10210a417; -[_TtC45MapContextInFriendsFeedServicesImplementation30MapContextInFriendsFeedManager userIdToMapContextSCObservable] */

void FUN_10210a378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  FUN_10210a0b8();
  uVar1 = uVar2;
  FUN_10210d9e0();
  func_0x0001000c2068();
  func_0x000107c61574(uVar2);
  uVar2 = 0;
  func_0x00010210dfc4(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  pcVar3 = FUN_10210a320;
  func_0x0001000bfde0(FUN_10210a320,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10210a418; end: 10210a4cf; -[_TtC45MapContextInFriendsFeedServicesImplementation30MapContextInFriendsFeedManager getMapFriendContextInfo] */

void FUN_10210a418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000a8868(param_1 + 0x40,*(undefined8 *)(param_1 + 0x58));
  uVar1 = 0;
  func_0x00010210f668(0);
  func_0x000107c6157c(param_1);
  (*(code *)(undefined *)0x10210f744)(uVar1,&PTR_DAT_1104cc138);
  func_0x000107c61574(param_1);
  uVar2 = 0;
  func_0x00010210dfc4(0,0x112d5ecc8,&PTR_PTR_1126cd678);
  uVar3 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10210a4d0; end: 10210aa3b;  */

long FUN_10210a4d0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long alStack_98 [7];
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      if (param_2 != 0) {
        FUN_10210cddc();
        uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c615f0();
        FUN_10210d738(param_2,uVar5,FUN_10210d9a8);
        func_0x000107c615e8(uVar5);
        plVar4 = (long *)(unaff_x20 + 0x68);
        func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x80));
        lVar6 = *plVar4;
        func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x20));
        func_0x000107c6157c(lVar6);
        lVar3 = param_2;
        func_0x000107c6157c(param_2);
        FUN_10210d248();
        func_0x000107c61574(lVar6);
        func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x20));
        func_0x000107c61574();
        func_0x00010210aadc();
        lVar6 = param_2 + -1;
        if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10210aa14);
          (*pcVar1)();
        }
        if (0x31 < lVar6) {
          lVar6 = 0x32;
        }
        FUN_10210d48c(alStack_98,lVar6,lVar3);
        func_0x000107c61574(lVar3);
        FUN_10210c1a4(alStack_98);
        func_0x000107c615e8(uVar5);
      }
    }
    else if (param_1 == 1) {
      lVar6 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        lVar3 = lVar6;
        func_0x000107c41064();
        func_0x000107c61180();
        func_0x000107c615e8(lVar6);
        lVar6 = lVar3;
        func_0x000107c5fe10(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(lVar3);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c61434(lVar6);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c615f0();
        lVar3 = lVar6;
        FUN_10210d738(lVar6,uVar5,FUN_10210e018);
        func_0x000107c615e8(uVar5);
        plVar4 = (long *)(unaff_x20 + 0x68);
        func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x80));
        lVar7 = *plVar4;
        func_0x000107c4b940(*(undefined8 *)(lVar7 + 0x20));
        func_0x000107c6157c(lVar7);
        func_0x000107c6157c(lVar3);
        FUN_10210d248();
        func_0x000107c61574(lVar7);
        func_0x000107c5d278(*(undefined8 *)(lVar7 + 0x20));
        func_0x000107c6142c(lVar6);
        func_0x000107c615e8(uVar5);
        func_0x000107c61574(lVar3);
      }
    }
    else {
      if (param_1 != 2) goto LAB_10210aa18;
      if (param_2 != 0) {
        FUN_10210cddc();
        uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c615f0();
        FUN_10210d738(param_2,uVar5,FUN_10210d9a8);
        func_0x000107c615e8(uVar5);
        plVar4 = (long *)(unaff_x20 + 0x68);
        func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x80));
        lVar6 = *plVar4;
        func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x20));
        func_0x000107c6157c(lVar6);
        lVar3 = param_2;
        func_0x000107c6157c(param_2);
        FUN_10210d248();
        func_0x000107c61574(lVar6);
        func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x20));
        func_0x000107c61574();
        func_0x00010210aadc();
        lVar6 = param_2 + -1;
        if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10210aa18);
          (*pcVar1)();
        }
        if (0x31 < lVar6) {
          lVar6 = 0x32;
        }
        FUN_10210d48c(alStack_98,lVar6,lVar3);
        func_0x000107c61574(lVar3);
        FUN_10210c1a4(alStack_98);
        func_0x000107c615e8(uVar5);
      }
    }
  }
  else if (param_1 - 3U < 2) {
    if (param_2 != 0) {
      FUN_10210cddc();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c615f0();
      FUN_10210d738(param_2,uVar5,FUN_10210d9a8);
      func_0x000107c615e8(uVar5);
      func_0x0001000a8868(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
      uVar2 = 0;
      func_0x00010210f668(0);
      lVar3 = param_2;
      (*(code *)(undefined *)0x10210f6dc)(param_2,uVar2,&PTR_DAT_1104cc138);
      plVar4 = (long *)(unaff_x20 + 0x68);
      func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x80));
      lVar6 = *plVar4;
      func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x20));
      func_0x000107c6157c(lVar6);
      lVar7 = lVar3;
      func_0x000107c61434(lVar3);
      FUN_10210d248();
      func_0x000107c61574(lVar6);
      func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x20));
      func_0x000107c61574(param_2);
      func_0x000107c6142c();
      func_0x00010210aadc();
      lVar6 = lVar3 + -1;
      if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10210aa10);
        (*pcVar1)();
      }
      if (0x31 < lVar6) {
        lVar6 = 0x32;
      }
      FUN_10210d48c(alStack_98,lVar6,lVar7);
      func_0x000107c61574(lVar7);
      FUN_10210c1a4(alStack_98);
      func_0x000107c615e8(uVar5);
    }
  }
  else {
    if (param_1 != 5) {
LAB_10210aa18:
      alStack_98[0] = param_1;
      func_0x000107c60614(&UNK_1104cc1f0,alStack_98,&UNK_1104cc1f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210aa3c);
      (*pcVar1)();
    }
    if (param_3 != 0) {
      func_0x0001000a8868(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
      uVar5 = 0;
      func_0x00010210f668(0);
      (*(code *)(undefined *)0x10210f6dc)(param_3,uVar5,&PTR_DAT_1104cc138);
      plVar4 = (long *)(unaff_x20 + 0x68);
      func_0x0001000a8868(plVar4,*(undefined8 *)(unaff_x20 + 0x80));
      lVar6 = *plVar4;
      func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x20));
      func_0x000107c6157c(lVar6);
      func_0x000107c61434(param_3);
      FUN_10210d248();
      func_0x000107c61574(lVar6);
      func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x20));
      func_0x000107c6142c(param_3);
    }
  }
  return param_1;
}



/* Entry: 10210aa3c; end: 10210ab53; -[_TtC45MapContextInFriendsFeedServicesImplementation30MapContextInFriendsFeedManager requestMapFriendContextFetchFor:triggerType:] */

void FUN_10210aa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6157c(param_1);
  uVar1 = 0;
  uVar2 = param_3;
  FUN_10210a4d0();
  bStack_38 = (byte)uVar2 & 1;
  uStack_48 = param_4;
  uStack_40 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 10210ab54; end: 10210aceb;  */

void FUN_10210ab54(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5deec();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        uVar4 = 0x112e53058;
        func_0x0001000285a8(0x112e53058,&UNK_10da53920);
        lVar2 = lVar3;
        func_0x0001000b637c(lVar3,uVar4);
        puVar7 = &UNK_1104cbdc0;
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        uVar4 = 0x10210daf4;
        func_0x0001000d5158(0x10210daf4,puVar5,PTR___sSbN_11034dd40);
        func_0x000107c61574(lVar2);
        func_0x000107c61574(puVar5);
        uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
        func_0x000104880bc0(0x4014000000000000,uVar6);
        func_0x000107c61574(uVar4);
        puVar5 = PTR___sSbSQsWP_11034dd50;
        func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
        func_0x000107c61574(uVar6);
        func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        func_0x00010487e4e0(0x10210dafc,puVar7);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar7);
      }
    }
  }
  return;
}



/* Entry: 10210acec; end: 10210afa7;  */

void FUN_10210acec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (lVar7 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
        lVar2 = lVar1;
        func_0x000107c43abc(lVar1);
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x0001000b637c();
        func_0x000107c61170(lVar2);
        uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
        func_0x000104880bc0(0x4014000000000000,uVar4);
        func_0x000107c61574(lVar3);
        puVar5 = &UNK_1104cbdc0;
        func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar6 = &UNK_1104cbe38;
        func_0x000107c613fc(&UNK_1104cbe38,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(long *)(puVar6 + 0x18) = lVar7;
        func_0x000107c615f0(lVar7);
        func_0x0001000d5158(0x10210daec,puVar6,&UNK_1104cbd90);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar7);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(puVar6);
        return;
      }
    }
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 10210afa8; end: 10210afcf;  */

bool FUN_10210afa8(char *param_1)

{
  if (*param_1 == '\x01') {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0;
  }
  return false;
}



/* Entry: 10210afd0; end: 10210b083;  */

void FUN_10210afd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 == 0) {
    func_0x0001000285a8(0x112e59290,&UNK_10da5dab8);
    func_0x000104886440();
  }
  else {
    func_0x0001000a8868(param_5 + 0x68,*(undefined8 *)(param_5 + 0x80));
    FUN_102108718(param_3,param_2,param_4 & 1);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 10210b084; end: 10210b16b;  */

void FUN_10210b084(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10210eb48();
  }
  else {
    func_0x0001000a8868(param_3 + 0x40,*(undefined8 *)(param_3 + 0x58));
    puVar1 = (undefined *)0x0;
    func_0x00010210f668();
    FUN_10210f688(uVar2,puVar1,&PTR_DAT_1104cc138);
    func_0x0001000a8868(param_3 + 0x40,*(undefined8 *)(param_3 + 0x58));
    (*(code *)(undefined *)0x10210f744)(puVar1,&PTR_DAT_1104cc138);
    func_0x000107c61574(param_3);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10210b16c; end: 10210b1e7;  */

void FUN_10210b16c(byte *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  undefined1 auStack_48 [24];
  
  bVar1 = (byte)*param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    bVar1 = 2;
  }
  else {
    FUN_10210db6c();
    func_0x000107c61574(param_3);
    bVar1 = bVar1 & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10210b1e8; end: 10210b243;  */

void FUN_10210b1e8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10210b244(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10210b244; end: 10210b427;  */

/* WARNING: Possible PIC construction at 0x00010210b2c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010210b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010210b424) */
/* WARNING: Removing unreachable block (ram,0x00010210b368) */
/* WARNING: Removing unreachable block (ram,0x00010210b370) */

void FUN_10210b244(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0xa0) != 0) {
      func_0x000107c4218c();
    }
    lVar1 = 0;
    if (*(long *)(unaff_x20 + 0x90) != 0) {
      func_0x000107c498f8();
      lVar1 = *(long *)(unaff_x20 + 0x90);
    }
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  FUN_10210b428();
  FUN_10210b608();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c43aa4();
      func_0x000107c61180();
      uVar2 = 0;
      func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
      func_0x000107c5fc54(lVar1,uVar2);
      goto code_r0x000107c61170;
    }
  }
  return;
}



/* Entry: 10210b428; end: 10210b607;  */

/* WARNING: Possible PIC construction at 0x00010210b48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010210b5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010210b490) */
/* WARNING: Removing unreachable block (ram,0x00010210b5e8) */

void FUN_10210b428(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  uVar1 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c448d0();
      if (((uVar2 & 1) == 0) && (lVar3 = *(long *)(unaff_x20 + 0x20), lVar3 != 0)) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if ((lVar3 != 0) && (*(long *)(unaff_x20 + 0xa0) == 0)) {
          uVar2 = uVar1;
          func_0x000107c4b93c();
          func_0x000107c61180();
          uVar4 = uVar2;
          func_0x000107c435e4();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          uVar2 = uVar4;
          func_0x000107c4da88();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          puVar5 = &UNK_1104cbdc0;
          func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
          func_0x000107c61644(puVar5 + 0x10);
          puVar6 = &UNK_1104cbe88;
          func_0x000107c613fc(&UNK_1104cbe88,0x20,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(long *)(puVar6 + 0x18) = lVar3;
          pcStack_50 = FUN_10210db64;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          puStack_60 = &UNK_101114e8c;
          puStack_58 = &UNK_1104cbea0;
          puStack_48 = puVar6;
          func_0x000107c60bc4(&puStack_70);
          puVar5 = puStack_48;
          func_0x000107c615f0(lVar3);
          func_0x000107c61574(puVar5);
          uVar4 = uVar2;
          func_0x000107c5c320();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(uVar2);
          uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
          *(ulong *)(unaff_x20 + 0xa0) = uVar4;
          func_0x000107c61170(uVar8);
          func_0x000107c4fd74(0x4072c00000000000,uVar1);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10210b608; end: 10210b747;  */

void FUN_10210b608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (*(long *)(unaff_x20 + 0x90) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    puVar2 = &UNK_1104cbdc0;
    func_0x000107c613fc(&UNK_1104cbdc0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_50 = 0x10210db04;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100fef460;
    puStack_58 = &UNK_1104cbe50;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar2);
    func_0x000107c5ca5c((double)lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    puVar1 = puStack_48;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = puVar4;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10210b748; end: 10210b83b;  */

void FUN_10210b748(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar1 = lVar3;
      func_0x000107c41064();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar1;
      func_0x000107c5fe10(lVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(lVar1);
    }
    lVar1 = lVar3;
    FUN_10210c048();
    func_0x000107c6142c(lVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uStack_60 = 1;
    uStack_50 = 0;
    lStack_58 = lVar1;
    func_0x000107c6157c(uVar2);
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c6142c(lVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10210b83c; end: 10210b9e7;  */

void FUN_10210b83c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  
  func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    func_0x000107c43aa4();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
    lVar3 = param_4;
    func_0x000107c5fc54(param_4,uVar2);
    func_0x000107c61170(param_4);
    lVar4 = lVar3;
    FUN_10210cddc();
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c615f0();
    FUN_10210d738(lVar4,uVar2,FUN_10210d9a8);
    func_0x000107c615e8(uVar2);
    plVar5 = (long *)(param_3 + 0x68);
    func_0x0001000a8868(plVar5,*(undefined8 *)(param_3 + 0x80));
    lVar8 = *plVar5;
    func_0x000107c4b940(*(undefined8 *)(lVar8 + 0x20));
    func_0x000107c6157c(lVar8);
    lVar6 = lVar4;
    func_0x000107c6157c(lVar4);
    FUN_10210d248();
    func_0x000107c61574(lVar8);
    func_0x000107c5d278(*(undefined8 *)(lVar8 + 0x20));
    func_0x000107c61574();
    func_0x00010210aadc();
    lVar8 = lVar4 + -1;
    if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210b9e8);
      (*pcVar1)();
    }
    if (0x31 < lVar8) {
      lVar8 = 0x32;
    }
    FUN_10210d48c(auStack_88,lVar8,lVar6);
    func_0x000107c61574(lVar6);
    puVar7 = auStack_88;
    FUN_10210c1a4();
    func_0x000107c6142c(lVar3);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar2);
    *param_1 = 0;
    param_1[1] = puVar7;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10210b9e8; end: 10210bb07;  */

bool FUN_10210b9e8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *param_1;
  lVar2 = lVar4;
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70);
    func_0x000107c615e8(lVar2);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 != 0) {
    plVar3 = &lStack_78;
    func_0x000107c6147c(plVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    lVar2 = lStack_78;
    if (((ulong)plVar3 & 1) == 0) {
      return false;
    }
    func_0x000107c4aa28();
    func_0x000107c61180();
    if (lVar4 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70);
      func_0x000107c615e8(lVar4);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    lStack_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 != 0) {
      plVar3 = &lStack_78;
      func_0x000107c6147c(plVar3,&uStack_50,puVar1 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)plVar3 & 1) == 0) {
        return false;
      }
      if (lVar2 < 0) {
        return false;
      }
      return lVar2 < lStack_78;
    }
  }
  uStack_50 = uStack_70;
  uStack_48 = uStack_68;
  uStack_40 = uStack_60;
  lStack_38 = lStack_58;
  func_0x00010006e7f4(&uStack_50);
  return false;
}



/* Entry: 10210bb08; end: 10210c047;  */

void FUN_10210bb08(undefined8 *param_1,long *param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar11 = *param_2;
  lVar15 = lVar11;
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar15 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_c0);
    func_0x000107c615e8(lVar15);
  }
  puVar4 = PTR___sypN_11034f1a8;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
LAB_10210bc84:
    uStack_a0 = uStack_c0;
    uStack_98 = uStack_b8;
    uStack_90 = uStack_b0;
    lStack_88 = lStack_a8;
    func_0x00010006e7f4(&uStack_a0);
  }
  else {
    ppuVar2 = &puStack_c8;
    func_0x000107c6147c(ppuVar2,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    puVar12 = puStack_c8;
    if (((ulong)ppuVar2 & 1) != 0) {
      func_0x000107c4aa28();
      func_0x000107c61180();
      if (lVar11 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_c0);
        func_0x000107c615e8(lVar11);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_10210bc84;
      ppuVar2 = &puStack_c8;
      puVar13 = PTR___sSiN_11034deb0;
      func_0x000107c6147c(ppuVar2,&uStack_a0,puVar4 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)ppuVar2 & 1) != 0) {
        func_0x000107c43aa4();
        func_0x000107c61180();
        uVar3 = 0;
        func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
        puVar4 = param_3;
        func_0x000107c5fc54(param_3,uVar3);
        func_0x000107c61170(param_3);
        uVar14 = (ulong)puVar4 >> 0x3e;
        if (uVar14 == 0) {
          puVar5 = *(undefined **)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if (((ulong)puVar4 & 0x8000000000000000) != 0) {
            puVar5 = puVar4;
          }
          func_0x000107c60480();
        }
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c6142c(puVar4);
        }
        else {
          if ((long)puStack_c8 < (long)puVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c014);
            (*pcVar1)();
          }
          if (uVar14 == 0) {
            puVar5 = *(undefined **)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if (((ulong)puVar4 & 0x8000000000000000) != 0) {
              puVar5 = puVar4;
            }
            func_0x000107c60480();
          }
          puVar10 = puVar5 + -1;
          if (SBORROW8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c018);
            (*pcVar1)();
          }
          if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c01c);
            (*pcVar1)();
          }
          puVar5 = puVar10;
          if ((long)puVar12 <= (long)puVar10) {
            puVar5 = puVar12;
          }
          puVar6 = (undefined *)0x0;
          if (-1 < (long)puVar12) {
            puVar6 = puVar5;
          }
          if (((long)puVar10 < (long)puStack_c8) || (puVar10 = puStack_c8, -1 < (long)puStack_c8)) {
            puVar12 = puVar10 + 1;
            if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c02c);
              (*pcVar1)();
            }
            if (uVar14 != 0) goto LAB_10210bd0c;
LAB_10210bcf8:
            puVar5 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar12 = (undefined *)0x1;
            if (uVar14 == 0) goto LAB_10210bcf8;
LAB_10210bd0c:
            puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if (((ulong)puVar4 & 0x8000000000000000) != 0) {
              puVar5 = puVar4;
            }
            func_0x000107c60480();
          }
          if ((long)puVar5 < (long)puVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c020);
            (*pcVar1)();
          }
          if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c024);
            (*pcVar1)();
          }
          if (uVar14 == 0) {
            puVar5 = *(undefined **)((undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if (((ulong)puVar4 & 0x8000000000000000) != 0) {
              puVar5 = puVar4;
            }
            func_0x000107c60480();
          }
          if ((long)puVar5 < (long)puVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c028);
            (*pcVar1)();
          }
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
LAB_10210bd64:
            func_0x000107c61434(puVar4);
          }
          else {
            if (puVar12 < puVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c030);
              (*pcVar1)();
            }
            if (puVar6 == puVar12) goto LAB_10210bd64;
            if (puVar12 <= puVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c048);
              (*pcVar1)();
            }
            func_0x000107c61434(puVar4);
            puVar5 = puVar6;
            do {
              puVar10 = puVar5 + 1;
              func_0x000107c60318(puVar5,puVar4,uVar3);
              puVar5 = puVar10;
            } while (puVar12 != puVar10);
          }
          func_0x000107c6142c(puVar4);
          if (uVar14 == 0) {
            puVar13 = (undefined *)((long)puVar12 << 1 | 1);
            puVar5 = puVar6;
            puVar6 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            puVar12 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8) + 0x20;
LAB_10210be10:
            uVar3 = 0;
            func_0x000107c605fc(0);
            puVar4 = puVar6;
            func_0x000107c615f4(puVar6,3);
            func_0x000107c61480();
            if (puVar4 == (undefined *)0x0) {
              func_0x000107c615e8(puVar6);
              puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            lVar15 = *(long *)(puVar4 + 0x10);
            func_0x000107c61574();
            if (SBORROW8((ulong)puVar13 >> 1,(long)puVar5)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c038);
              (*pcVar1)();
            }
            if (lVar15 != ((ulong)puVar13 >> 1) - (long)puVar5) {
              func_0x000107c615ec(puVar6,2);
              goto LAB_10210bdf4;
            }
            puVar12 = puVar6;
            func_0x000107c61480(puVar6,uVar3);
            func_0x000107c615ec(puVar6,2);
            puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar12 == (undefined *)0x0) goto LAB_10210be88;
          }
          else {
            puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if (((ulong)puVar4 & 0x8000000000000000) != 0) {
              puVar5 = puVar4;
            }
            func_0x000107c60484(puVar6,puVar12);
            func_0x000107c6142c(puVar4);
            if (((ulong)puVar13 & 1) != 0) goto LAB_10210be10;
LAB_10210bdf4:
            puVar4 = puVar6;
            FUN_10210c928(puVar6,puVar12,puVar5,puVar13);
LAB_10210be88:
            func_0x000107c615e8(puVar6);
            puVar12 = puVar4;
          }
          func_0x000107c61428(param_4 + 0x10,&uStack_c0,0,0);
          param_4 = param_4 + 0x10;
          func_0x000107c61648();
          if (param_4 != 0) {
            puVar4 = puVar12;
            FUN_10210cddc();
            uVar3 = *(undefined8 *)(param_4 + 0x38);
            func_0x000107c5c734(uVar3);
            func_0x000107c61180();
            func_0x000107c615f0();
            FUN_10210d738(puVar4,uVar3,FUN_10210d9a8);
            func_0x000107c615e8(uVar3);
            func_0x0001000a8868(param_4 + 0x40,*(undefined8 *)(param_4 + 0x58));
            uVar7 = 0;
            func_0x00010210f668(0);
            puVar13 = puVar4;
            (*(code *)(undefined *)0x10210f6dc)(puVar4,uVar7,&PTR_DAT_1104cc138);
            plVar8 = (long *)(param_4 + 0x68);
            func_0x0001000a8868(plVar8,*(undefined8 *)(param_4 + 0x80));
            lVar15 = *plVar8;
            func_0x000107c4b940(*(undefined8 *)(lVar15 + 0x20));
            func_0x000107c6157c(lVar15);
            puVar5 = puVar13;
            func_0x000107c61434(puVar13);
            FUN_10210d248();
            func_0x000107c61574(lVar15);
            func_0x000107c5d278(*(undefined8 *)(lVar15 + 0x20));
            func_0x000107c61574(puVar4);
            func_0x000107c6142c();
            func_0x00010210aadc();
            puVar4 = puVar13 + -1;
            if (SBORROW8((long)puVar13,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c034);
              (*pcVar1)();
            }
            if (0x31 < (long)puVar4) {
              puVar4 = (undefined *)0x32;
            }
            FUN_10210d48c(&uStack_a0,puVar4,puVar5);
            func_0x000107c61574(puVar5);
            puVar9 = &uStack_a0;
            FUN_10210c1a4();
            func_0x000107c61574(puVar12);
            func_0x000107c61574(param_4);
            func_0x000107c615e8(uVar3);
            *param_1 = 4;
            param_1[1] = puVar9;
            goto LAB_10210bc90;
          }
          func_0x000107c61574(puVar12);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10210bc90:
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10210c048; end: 10210c127;  */

undefined * FUN_10210c048(undefined *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61434();
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c615f0();
    FUN_10210d738(param_1,uVar3,FUN_10210e018);
    func_0x000107c615e8(uVar3);
    plVar1 = (long *)(unaff_x20 + 0x68);
    func_0x0001000a8868(plVar1,*(undefined8 *)(unaff_x20 + 0x80));
    lVar4 = *plVar1;
    func_0x000107c4b940(*(undefined8 *)(lVar4 + 0x20));
    func_0x000107c6157c(lVar4);
    puVar2 = param_1;
    func_0x000107c6157c(param_1);
    FUN_10210d248();
    func_0x000107c61574(lVar4);
    func_0x000107c5d278(*(undefined8 *)(lVar4 + 0x20));
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(param_1);
  }
  return puVar2;
}



/* Entry: 10210c128; end: 10210c1a3;  */

bool FUN_10210c128(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return false;
  }
  uVar1 = *param_1;
  func_0x000107c5fadc(uVar1,param_1[1]);
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  return param_2 != 0;
}



/* Entry: 10210c1a4; end: 10210c343;  */

long FUN_10210c1a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  bVar5 = *(byte *)(param_1 + 2);
  lVar2 = param_1[3];
  lVar4 = param_1[4];
  cVar6 = (char)param_1[5];
  lVar12 = param_1[6];
  lVar8 = lVar1;
  FUN_10210cc54(lVar1,lVar3,bVar5,lVar2,lVar4,cVar6,lVar12);
  func_0x000107c5fe14();
  lStack_68 = lVar8;
  FUN_10210d980(lVar1,lVar3,bVar5);
  uVar13 = (uint)bVar5;
  if (uVar13 != 1 && cVar6 != '\x01') {
    uVar14 = (ulong)uVar13;
    lVar8 = lVar1;
    lVar11 = lVar3;
    do {
      if ((int)lVar11 != (int)lVar4) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210c338);
        (*pcVar7)();
      }
      if (lVar8 == lVar2) {
        func_0x00010210d994(lVar1,lVar3,uVar13);
        func_0x00010210d994(lVar2,lVar4,cVar6);
        func_0x000107c6142c(lVar12);
        func_0x00010210d994(lVar2,lVar11,uVar14);
        return lStack_68;
      }
      if (lVar8 < lVar1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210c33c);
        (*pcVar7)();
      }
      if ((int)lVar4 != (int)lVar3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210c340);
        (*pcVar7)();
      }
      if (lVar2 <= lVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210c344);
        (*pcVar7)();
      }
      lVar9 = lVar8;
      lVar10 = lVar11;
      FUN_1019749b0(lVar8,lVar11,uVar14,lVar12);
      func_0x000107c61434(lVar10);
      FUN_10210cd5c();
      func_0x000100403b00(auStack_78,lVar9,lVar10);
      func_0x000107c6142c(uStack_70);
    } while (((uint)uVar14 & 0xff) != 1);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10210c2dc);
  (*pcVar7)();
}



/* Entry: 10210c344; end: 10210c547;  */

void FUN_10210c344(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  
  func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c43aa4();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
    lVar3 = param_3;
    func_0x000107c5fc54(param_3,uVar2);
    func_0x000107c61170(param_3);
    lVar4 = lVar3;
    FUN_10210cddc();
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c615f0();
    FUN_10210d738(lVar4,uVar2,FUN_10210d9a8);
    func_0x000107c615e8(uVar2);
    func_0x0001000a8868(param_2 + 0x40,*(undefined8 *)(param_2 + 0x58));
    uVar5 = 0;
    func_0x00010210f668(0);
    lVar6 = lVar4;
    (*(code *)(undefined *)0x10210f6dc)(lVar4,uVar5,&PTR_DAT_1104cc138);
    plVar7 = (long *)(param_2 + 0x68);
    func_0x0001000a8868(plVar7,*(undefined8 *)(param_2 + 0x80));
    lVar10 = *plVar7;
    func_0x000107c4b940(*(undefined8 *)(lVar10 + 0x20));
    func_0x000107c6157c(lVar10);
    lVar8 = lVar6;
    func_0x000107c61434(lVar6);
    FUN_10210d248();
    func_0x000107c61574(lVar10);
    func_0x000107c5d278(*(undefined8 *)(lVar10 + 0x20));
    func_0x000107c61574(lVar4);
    func_0x000107c6142c();
    func_0x00010210aadc();
    lVar4 = lVar6 + -1;
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c548);
      (*pcVar1)();
    }
    if (0x31 < lVar4) {
      lVar4 = 0x32;
    }
    FUN_10210d48c(auStack_88,lVar4,lVar8);
    func_0x000107c61574(lVar8);
    puVar9 = auStack_88;
    FUN_10210c1a4();
    func_0x000107c6142c(lVar3);
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uStack_c0 = 3;
    uStack_b0 = 0;
    puStack_b8 = puVar9;
    func_0x000107c6157c(uVar2);
    func_0x0001002a64a8(&uStack_c0);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10210c548; end: 10210c5f3;  */

void FUN_10210c548(void)

{
  long unaff_x20;
  
  FUN_10210dfa0(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x0001000834e4(unaff_x20 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 10210c5f4; end: 10210c5fb;  */

void FUN_10210c5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10210c5fc; end: 10210c62f;  */

undefined8 * FUN_10210c5fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10210c630; end: 10210c683;  */

undefined8 * FUN_10210c630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10210c684; end: 10210c6bf;  */

undefined8 * FUN_10210c684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10210c6c0; end: 10210c76b;  */

int FUN_10210c6c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10210c76c; end: 10210c927;  */

ulong FUN_10210c76c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210c850);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210c854);
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
  func_0x00010210dfc4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10210c928);
  (*pcVar2)();
}



/* Entry: 10210c928; end: 10210ca13;  */

undefined * FUN_10210c928(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210ca14);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      func_0x000101b5a970();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210ca10);
      (*pcVar2)();
    }
    uVar4 = 0;
    func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 10210ca14; end: 10210cc53;  */

void FUN_10210ca14(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3 + 0x38;
  func_0x000107c60268(lVar3,~(-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)));
  lVar4 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  if (lVar4 < lVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cad4);
    (*pcVar2)();
  }
  lVar1 = param_2[2];
  if ((char)lVar1 == '\x01') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cae8);
    (*pcVar2)();
  }
  lVar5 = param_2[1];
  if (*(int *)(param_3 + 0x24) != (int)lVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cad8);
    (*pcVar2)();
  }
  if (lVar3 <= *param_2) {
    lVar3 = param_2[5];
    if ((char)lVar3 == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210caec);
      (*pcVar2)();
    }
    lVar7 = param_2[4];
    if (*(int *)(param_3 + 0x24) == (int)lVar7) {
      lVar6 = param_2[3];
      if (lVar6 <= lVar4) {
        *param_1 = *param_2;
        param_1[1] = lVar5;
        *(char *)(param_1 + 2) = (char)lVar1;
        param_1[3] = lVar6;
        param_1[4] = lVar7;
        *(char *)(param_1 + 5) = (char)lVar3;
        param_1[6] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cae4);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cae0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cadc);
  (*pcVar2)();
}



/* Entry: 10210cc54; end: 10210cd5b;  */

long FUN_10210cc54(ulong param_1,int param_2,char param_3,ulong param_4,int param_5,char param_6,
                  long param_7)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  if (param_6 == '\x01' || param_3 == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd5c);
    (*pcVar1)();
  }
  if ((long)param_4 < (long)param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd50);
    (*pcVar1)();
  }
  if (param_5 != param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd54);
    (*pcVar1)();
  }
  if (param_1 == param_4) {
    return 0;
  }
  if (*(int *)(param_7 + 0x24) != param_5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd58);
    (*pcVar1)();
  }
  uVar5 = 1L << ((ulong)*(byte *)(param_7 + 0x20) & 0x3f);
  lVar3 = 1;
  do {
    if (uVar5 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd48);
      (*pcVar1)();
    }
    uVar7 = param_1 >> 6;
    uVar6 = *(ulong *)(param_7 + 0x38 + uVar7 * 8);
    if ((uVar6 >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd4c);
      (*pcVar1)();
    }
    uVar6 = uVar6 & -2L << (param_1 & 0x3f);
    if (uVar6 == 0) {
      lVar4 = uVar7 << 6;
      puVar8 = (ulong *)(param_7 + 0x40 + uVar7 * 8);
      do {
        uVar7 = uVar7 + 1;
        param_1 = uVar5;
        if (uVar5 + 0x3f >> 6 <= uVar7) goto LAB_10210cd30;
        uVar6 = *puVar8;
        lVar4 = lVar4 + 0x40;
        puVar8 = puVar8 + 1;
      } while (uVar6 == 0);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      param_1 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + lVar4;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      param_1 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | param_1 & 0x7fffffffffffffc0;
    }
LAB_10210cd30:
    if (param_1 == param_4) {
      return lVar3;
    }
    bVar2 = SCARRY8(lVar3,1);
    lVar3 = lVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cd44);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 10210cd5c; end: 10210cddb;  */

void FUN_10210cd5c(ulong param_1,int param_2,char param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_3 == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cddc);
    (*pcVar1)();
  }
  uVar2 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  if (CARRY8(param_1,uVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cdd0);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + 0x38 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cdd4);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) == param_2) {
    func_0x000107c60270(param_1,param_4 + 0x38,~uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210cdd8);
  (*pcVar1)();
}



/* Entry: 10210cddc; end: 10210d00b;  */

undefined * FUN_10210cddc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_68;
  
  uVar11 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar10 = uVar11;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cfb0);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
          uVar9 = param_2;
        }
        else {
          uVar3 = uVar7;
          uVar9 = param_1;
          FUN_10210c76c(uVar7,param_1,&PTR_PTR_1126b14e0,0x112d61f70);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10210cfac);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c42924();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107cf9bb0();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 != 0) break;
LAB_10210ce38:
        func_0x000107c61170(uVar3);
        param_2 = uVar9;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar10) goto LAB_10210cfd0;
      }
      uVar4 = uVar3;
      func_0x000107c42924();
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107cfa64c();
      func_0x000107c61170(uVar4);
      if ((uVar6 & 1) != 0) {
LAB_10210ce30:
        func_0x000107c61170(uVar5);
        goto LAB_10210ce38;
      }
      uVar4 = uVar5;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar4 == 0) goto LAB_10210ce30;
      uVar7 = uVar4;
      func_0x000107c5faec();
      param_2 = uVar9;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar3);
      puVar8 = puStack_68;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        param_2 = *(long *)(puStack_68 + 0x10) + 1;
        puStack_68 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1);
      }
      uVar4 = *(ulong *)(puStack_68 + 0x10);
      uVar3 = uVar4 + 1;
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_68 + 0x18));
        param_2 = uVar3;
        func_0x0001000d182c(puVar8,uVar3,1,puStack_68);
        puStack_68 = puVar8;
      }
      *(ulong *)(puStack_68 + 0x10) = uVar3;
      *(ulong *)(puStack_68 + uVar4 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puStack_68 + uVar4 * 0x10 + 0x28) = uVar9;
      uVar7 = uVar1;
    } while (uVar1 != uVar10);
  }
LAB_10210cfd0:
  puVar8 = puStack_68;
  func_0x000100403a6c(puStack_68);
  func_0x000107c6142c(puStack_68);
  return puVar8;
}



/* Entry: 10210d00c; end: 10210d247;  */

void FUN_10210d00c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  uVar13 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_3 + 0x38);
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  lVar12 = 0;
  lVar9 = 0;
LAB_10210d0a8:
  do {
    if (uVar14 == 0) {
      do {
        lVar15 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10210d248);
          (*pcVar4)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lVar12,param_3);
          return;
        }
        uVar14 = ((ulong *)(param_3 + 0x38))[lVar15];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar15 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8);
    lVar17 = *(long *)(param_4 + 0x10);
    lVar9 = lVar15;
    if (*(long *)(lVar17 + 0x10) != 0) {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar8 | lVar15 << 6) * 0x10);
      uVar11 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar17 + 0x28));
      func_0x000107c61434(uVar2);
      func_0x000107c61434(lVar17);
      puVar6 = auStack_c0;
      func_0x000107c5fb58(puVar6,uVar11,uVar2);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x10);
          uVar7 = *puVar1;
          uVar3 = puVar1[1];
          if ((uVar7 == uVar11 && uVar3 == uVar2) ||
             (func_0x000107c605b8(uVar7,uVar3,uVar11,uVar2,0), (uVar7 & 1) != 0)) {
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(lVar17);
            goto LAB_10210d0a8;
          }
          uVar16 = uVar16 + 1 & ~uVar10;
        } while ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
      }
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar17);
    }
    uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
    *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar8 & 0x3f);
    bVar5 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10210d204);
      (*pcVar4)();
    }
  } while( true );
}



/* Entry: 10210d248; end: 10210d48b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10210d248(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 *extraout_x8;
  long *unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long **unaff_x26;
  long **pplVar12;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *aplStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar10 = uVar9 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
LAB_10210d2b4:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar5 = (long *)((long)aplStack_70 - (uVar10 + 0xf & 0x1ffffffffffffff0));
    func_0x000107c60ee4(plVar5,uVar10);
    func_0x000107c6157c(param_2);
    FUN_10210d00c(plVar5,uVar9,param_1,param_2);
    bVar3 = unaff_x21 != (long *)0x0;
    if (bVar3) {
      plVar5 = unaff_x21;
    }
    uVar11 = (ulong)(uint)bVar3;
    if (bVar3) {
      unaff_x21 = (long *)0x0;
    }
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    unaff_x26 = aplStack_70;
    pplVar12 = aplStack_70;
    if (bVar3 != 1) {
LAB_10210d43c:
      func_0x000107c61574(param_2);
      func_0x000107c61574();
      goto LAB_10210d44c;
    }
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar4 != 0) && (uVar11 = uVar10, func_0x000107c61594(uVar10,8), (uVar11 & 1) != 0))
    goto LAB_10210d2b4;
    func_0x000107c6158c(uVar10,0xffffffffffffffff);
    func_0x0001010af89c(aplStack_70 + 1);
    bVar3 = unaff_x21 != (long *)0x0;
    plVar5 = aplStack_70[1];
    if (bVar3) {
      unaff_x21 = (long *)0x0;
      plVar5 = aplStack_70[0];
    }
    uVar11 = (ulong)bVar3;
    uVar9 = 0xffffffffffffffff;
    func_0x000107c61590(uVar10,0xffffffffffffffff,0xffffffffffffffff);
    pplVar12 = unaff_x26;
    if (!bVar3) goto LAB_10210d43c;
  }
  iVar4 = 2;
  uVar9 = 0x12;
  aplStack_70[0] = plVar5;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(aplStack_70,uVar9,PTR___ss5ErrorWS_11034ee10);
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574();
  param_1 = param_2;
  unaff_x21 = plVar5;
  unaff_x26 = pplVar12;
LAB_10210d44c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  func_0x000107c60e78();
  puStack_c0 = (undefined1 *)unaff_x26;
  uStack_b8 = uVar11;
  uStack_b0 = uVar10;
  plStack_a8 = unaff_x21;
  plStack_a0 = plVar5;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d598);
    (*pcVar2)();
  }
  lVar6 = uVar9 + 0x38;
  func_0x000107c60268(lVar6,~(-1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f)));
  uVar1 = *(uint *)(uVar9 + 0x24);
  uVar11 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar8 = 0;
  uVar10 = (ulong)uVar1;
  func_0x00010210caec();
  bVar3 = (uVar8 & 0xff) == 0xff;
  if (bVar3) {
    lVar6 = -uVar11;
    uVar10 = (ulong)uVar1;
  }
  uVar1 = 0;
  if (!bVar3) {
    uVar1 = uVar8;
  }
  lVar7 = uVar9 + 0x38;
  func_0x000107c60268(lVar7,~uVar11);
  if ((uVar1 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d5a4);
    (*pcVar2)();
  }
  uStack_e8 = (ulong)*(uint *)(uVar9 + 0x24);
  if (*(uint *)(uVar9 + 0x24) != (uint)uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d59c);
    (*pcVar2)();
  }
  if (lVar7 <= lVar6) {
    uStack_e0 = 0;
    uStack_c8 = (undefined1)uVar1;
    plVar5 = &lStack_f0;
    lStack_f0 = lVar7;
    lStack_d8 = lVar6;
    uStack_d0 = uVar10;
    func_0x00010210ca14(&uStack_128,plVar5,uVar9);
    extraout_x8[1] = uStack_120;
    *extraout_x8 = uStack_128;
    extraout_x8[3] = uStack_110;
    extraout_x8[2] = uStack_118;
    extraout_x8[5] = uStack_100;
    extraout_x8[4] = uStack_108;
    extraout_x8[6] = uStack_f8;
    return plVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d5a0);
  (*pcVar2)();
}



/* Entry: 10210d48c; end: 10210d5a3;  */

void FUN_10210d48c(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d598);
    (*pcVar2)();
  }
  lVar4 = param_3 + 0x38;
  func_0x000107c60268(lVar4,~(-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)));
  uVar1 = *(uint *)(param_3 + 0x24);
  uVar8 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0;
  uVar6 = (ulong)uVar1;
  func_0x00010210caec();
  bVar3 = (uVar7 & 0xff) == 0xff;
  if (bVar3) {
    lVar4 = -uVar8;
    uVar6 = (ulong)uVar1;
  }
  uVar1 = 0;
  if (!bVar3) {
    uVar1 = uVar7;
  }
  lVar5 = param_3 + 0x38;
  func_0x000107c60268(lVar5,~uVar8);
  if ((uVar1 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d5a4);
    (*pcVar2)();
  }
  uStack_78 = (ulong)*(uint *)(param_3 + 0x24);
  if (*(uint *)(param_3 + 0x24) != (uint)uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d59c);
    (*pcVar2)();
  }
  if (lVar5 <= lVar4) {
    uStack_70 = 0;
    uStack_58 = (undefined1)uVar1;
    lStack_80 = lVar5;
    lStack_68 = lVar4;
    uStack_60 = uVar6;
    func_0x00010210ca14(&uStack_b8,&lStack_80,param_3);
    param_1[1] = uStack_b0;
    *param_1 = uStack_b8;
    param_1[3] = uStack_a0;
    param_1[2] = uStack_a8;
    param_1[5] = uStack_90;
    param_1[4] = uStack_98;
    param_1[6] = uStack_88;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10210d5a0);
  (*pcVar2)();
}



/* Entry: 10210d5a4; end: 10210d737;  */

void FUN_10210d5a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_68;
  
  lStack_68 = 0;
  lVar10 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_3 + 0x38);
  do {
    if (uVar11 == 0) {
      do {
        lVar6 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10210d738);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar6) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lStack_68,param_3);
          return;
        }
        uVar11 = ((ulong *)(param_3 + 0x38))[lVar6];
        lVar10 = lVar10 + 1;
      } while (uVar11 == 0);
      uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      lVar10 = lVar6;
    }
    else {
      uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar10 << 6;
    }
    if (param_4 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar5,uVar2);
      lVar6 = param_4;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar2);
      if (lVar6 != 0) {
        func_0x000107c61170(lVar6);
        uVar7 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar9 & 0x3f);
        bVar4 = SCARRY8(lStack_68,1);
        lStack_68 = lStack_68 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10210d6f4);
          (*pcVar3)();
        }
      }
    }
  } while( true );
}



/* Entry: 10210d738; end: 10210d97f;  */

undefined1 * FUN_10210d738(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *unaff_x21;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [4];
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar9 = uVar8 * 8;
  puStack_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar9, func_0x000107c61594(uVar9,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar9,0xffffffffffffffff);
      func_0x0001010af89c(apuStack_80);
      puVar2 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = puStack_88;
      }
      uVar5 = 0xffffffff;
      func_0x000107c61590(uVar9,0xffffffffffffffff);
      goto joined_r0x00010210d92c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = auStack_90 + -(uVar9 + 0xf & 0x1ffffffffffffff0);
  func_0x000107c60ee4(puVar2,uVar9);
  func_0x000107c615f0(param_2);
  lVar6 = param_1;
  FUN_10210d5a4(puVar2,uVar8,param_1,param_2);
  uVar5 = (uint)lVar6;
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c615e8(param_2);
joined_r0x00010210d92c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61574(param_1);
    func_0x000107c615e8(param_2);
  }
  else {
    iVar1 = 2;
    uVar5 = 0;
    puStack_88 = puVar2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_88,uVar3);
      uVar5 = (uint)puVar7;
    }
    func_0x000107c61574(param_1);
    func_0x000107c615e8(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  func_0x000107c60e78();
  if ((uVar5 & 0xff) != 1) {
    return param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return param_2;
}



/* Entry: 10210d980; end: 10210d9a7;  */

void FUN_10210d980(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 10210d9a8; end: 10210d9df;  */

uint FUN_10210d9a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10210c128(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 10210d9e0; end: 10210da4f;  */

void FUN_10210d9e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e59278 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e59280;
  func_0x00010002969c(0x112e59280,&UNK_10da5dab0);
  uVar2 = uVar1;
  FUN_10210da50();
  puVar3 = PTR___sSDyxq_GSQsSQR_rlMc_11034d790;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSQsSQR_rlMc_11034d790,uVar1,&uStack_28);
  puRam0000000112e59278 = puVar3;
  return;
}



/* Entry: 10210da50; end: 10210daa3;  */

void FUN_10210da50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e59288 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010210dfc4(0xff,0x112d5ecc8,&PTR_PTR_1126cd678);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e59288 = puVar2;
  return;
}



/* Entry: 10210daa4; end: 10210daab;  */

void FUN_10210daa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112e59290,&UNK_10da5dab8);
    func_0x000104886440();
  }
  else {
    func_0x0001000a8868(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x80));
    FUN_102108718(param_3,param_2,param_4 & 1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10210daac; end: 10210dadb;  */

void FUN_10210daac(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_1[0x18]);
  return;
}



/* Entry: 10210dadc; end: 10210db27;  */

void FUN_10210dadc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10210eb48();
  }
  else {
    func_0x0001000a8868(lVar1 + 0x40,*(undefined8 *)(lVar1 + 0x58));
    puVar2 = (undefined *)0x0;
    func_0x00010210f668();
    FUN_10210f688(uVar3,puVar2,&PTR_DAT_1104cc138);
    func_0x0001000a8868(lVar1 + 0x40,*(undefined8 *)(lVar1 + 0x58));
    (*(code *)(undefined *)0x10210f744)(puVar2,&PTR_DAT_1104cc138);
    func_0x000107c61574(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10210db28; end: 10210db63;  */

void FUN_10210db28(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10210db64; end: 10210db6b;  */

void FUN_10210db64(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_a0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c43aa4();
    func_0x000107c61180();
    uVar4 = 0;
    func_0x00010210dfc4(0,0x112d61f70,&PTR_PTR_1126b14e0);
    lVar5 = lVar3;
    func_0x000107c5fc54(lVar3,uVar4);
    func_0x000107c61170(lVar3);
    lVar3 = lVar5;
    FUN_10210cddc();
    uVar4 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c615f0();
    FUN_10210d738(lVar3,uVar4,FUN_10210d9a8);
    func_0x000107c615e8(uVar4);
    func_0x0001000a8868(lVar2 + 0x40,*(undefined8 *)(lVar2 + 0x58));
    uVar6 = 0;
    func_0x00010210f668(0);
    lVar7 = lVar3;
    (*(code *)(undefined *)0x10210f6dc)(lVar3,uVar6,&PTR_DAT_1104cc138);
    plVar8 = (long *)(lVar2 + 0x68);
    func_0x0001000a8868(plVar8,*(undefined8 *)(lVar2 + 0x80));
    lVar11 = *plVar8;
    func_0x000107c4b940(*(undefined8 *)(lVar11 + 0x20));
    func_0x000107c6157c(lVar11);
    lVar9 = lVar7;
    func_0x000107c61434(lVar7);
    FUN_10210d248();
    func_0x000107c61574(lVar11);
    func_0x000107c5d278(*(undefined8 *)(lVar11 + 0x20));
    func_0x000107c61574(lVar3);
    func_0x000107c6142c();
    func_0x00010210aadc();
    lVar3 = lVar7 + -1;
    if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210c548);
      (*pcVar1)();
    }
    if (0x31 < lVar3) {
      lVar3 = 0x32;
    }
    FUN_10210d48c(auStack_88,lVar3,lVar9);
    func_0x000107c61574(lVar9);
    puVar10 = auStack_88;
    FUN_10210c1a4();
    func_0x000107c6142c(lVar5);
    func_0x000107c615e8(uVar4);
    uVar4 = *(undefined8 *)(lVar2 + 0x98);
    uStack_c0 = 3;
    uStack_b0 = 0;
    puStack_b8 = puVar10;
    func_0x000107c6157c(uVar4);
    func_0x0001002a64a8(&uStack_c0);
    func_0x000107c6142c(puVar10);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10210db6c; end: 10210df27;  */

undefined1 FUN_10210db6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uStack_71 = 0;
  puVar4 = &UNK_1104cbed8;
  func_0x000107c613fc(&UNK_1104cbed8,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
  puVar5 = &UNK_1104cbf00;
  func_0x000107c613fc(&UNK_1104cbf00,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10210df28;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10210df38;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104cbf18;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104cbf50;
  func_0x000107c613fc(&UNK_1104cbf50,0x18,7);
  *(undefined1 **)(puVar7 + 0x10) = &uStack_71;
  puVar8 = &UNK_1104cbf78;
  func_0x000107c613fc(&UNK_1104cbf78,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10210df58;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x10210e044;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104cbf90;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104cbfc8;
  func_0x000107c613fc(&UNK_1104cbfc8,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
  puVar11 = &UNK_1104cbff0;
  func_0x000107c613fc(&UNK_1104cbff0,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x10210df64;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = FUN_10210df74;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104cc008;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1104cc040;
  func_0x000107c613fc(&UNK_1104cc040,0x18,7);
  *(undefined1 **)(puVar13 + 0x10) = &uStack_71;
  puVar14 = &UNK_1104cc068;
  func_0x000107c613fc(&UNK_1104cc068,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_10210df94;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = (code *)0x10210e048;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104cc080;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7ac(param_1);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_71;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x77,0x18a,0x31,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10210df1c);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x77,0x18c,0x22,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10210df20);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x77,0x18e,0x1b,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10210df24);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x77,400,0x1c,1);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10210df28);
  (*pcVar3)();
}



/* Entry: 10210df28; end: 10210df37;  */

void FUN_10210df28(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10210df38; end: 10210df57;  */

void FUN_10210df38(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10210df58; end: 10210df73;  */

void FUN_10210df58(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10210df74; end: 10210df93;  */

void FUN_10210df74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10210df94; end: 10210df9f;  */

void FUN_10210df94(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10210dfa0; end: 10210e003;  */

undefined8 FUN_10210dfa0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10210e004; end: 10210e017;  */

void FUN_10210e004(long param_1,long param_2)

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



/* Entry: 10210e018; end: 10210e02f;  */

uint FUN_10210e018(uint param_1)

{
  FUN_10210d9a8();
  return param_1 & 1;
}



/* Entry: 10210e030; end: 10210e053;  */

void FUN_10210e030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10210e054; end: 10210e293;  */

long FUN_10210e054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c43a80();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar2 = param_3;
  func_0x000107c43ad4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  uVar2 = param_5;
  func_0x000107c4b8ac();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  uVar2 = param_4;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  uVar2 = param_6;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  lVar3 = param_7;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    *(long *)(unaff_x20 + 0x38) = lVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210e180);
  (*pcVar1)();
}



/* Entry: 10210e294; end: 10210e4fb;  */

undefined * FUN_10210e294(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x00010210f668();
  func_0x000107c613fc();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10210eb48();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  puVar3 = PTR_PTR_1126a9e98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = 0;
  func_0x00010210a074();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = puVar3;
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_1104cc0b8;
  func_0x000107c613fc(&UNK_1104cc0b8,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(long *)(puVar3 + 0x18) = lVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  *(undefined8 *)(puVar3 + 0x38) = uVar13;
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(long *)(puVar3 + 0x40) = lVar2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10210ec48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10210ed70;
  puStack_88 = &UNK_1104cc0d0;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(lVar5);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = (code *)0x10210ec78;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10210ed74;
  puStack_88 = &UNK_1104cc0f8;
  ppuVar7 = &puStack_a0;
  puStack_78 = (undefined *)lVar2;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_78;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar4 = 0;
  FUN_102111488(0);
  func_0x000107c610f8();
  func_0x00010211138c(puVar6,puVar8,uVar4);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(lVar5);
  return puVar6;
}



/* Entry: 10210e4fc; end: 10210e8fb;  */

long FUN_10210e4fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long *aplStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar13 = *param_7;
  lVar4 = 0;
  auStack_140[1] = param_6;
  auStack_140[2] = param_5;
  auStack_140[3] = param_4;
  uStack_120 = param_3;
  func_0x000107c5f804();
  lStack_118 = *(long *)(lVar4 + -8);
  lStack_110 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar10 = (long)auStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x00010210a074();
  ppuStack_70 = &PTR_DAT_1104cbd08;
  lVar5 = 0;
  alStack_90[0] = param_2;
  lStack_78 = lVar4;
  func_0x000102108ddc();
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  aplStack_b8[0] = (long *)*puVar12;
  ppuStack_98 = &PTR_DAT_1104cbd08;
  *(undefined **)(lVar6 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar7 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  lStack_a0 = lVar4;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined8 *)(lVar6 + 0x18) = param_1;
  *(undefined **)(lVar6 + 0x20) = puVar7;
  FUN_10210ed0c(aplStack_b8,lVar6 + 0x28);
  func_0x0001000834e4(alStack_90);
  ppuStack_70 = &PTR_DAT_1104cbc78;
  ppuStack_98 = &PTR_DAT_1104cc138;
  lVar8 = 0;
  aplStack_b8[0] = param_7;
  lStack_a0 = lVar13;
  alStack_90[0] = lVar6;
  lStack_78 = lVar5;
  func_0x00010210c5d4();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)puVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar12);
  func_0x0001000c6518(aplStack_b8,lVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)puVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar11);
  auStack_e0[0] = *puVar12;
  auStack_108[0] = *puVar11;
  ppuStack_c0 = &PTR_DAT_1104cbc78;
  ppuStack_e8 = &PTR_DAT_1104cc138;
  lStack_f0 = lVar13;
  lStack_c8 = lVar5;
  func_0x000107c61614(lVar8 + 0x10,0);
  *(undefined8 *)(lVar8 + 0x18) = 0x708;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  func_0x0001000285a8(0x112e59398,&UNK_10da5db40);
  func_0x000107c613fc();
  uVar9 = auStack_140[1];
  func_0x000107c61174(auStack_140[1]);
  uVar1 = auStack_140[2];
  func_0x000107c61174(auStack_140[2]);
  uVar2 = auStack_140[3];
  func_0x000107c61174(auStack_140[3]);
  uVar3 = uStack_120;
  func_0x000107c61174(uStack_120);
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(long **)(lVar8 + 0x98) = param_7;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined1 *)(lVar8 + 0xb8) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar3;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  *(undefined8 *)(lVar8 + 0x30) = uVar1;
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  FUN_10210ed24(auStack_108,lVar8 + 0x40);
  FUN_10210ed24(auStack_e0,lVar8 + 0x68);
  lVar5 = lStack_110;
  lVar4 = lStack_118;
  (**(code **)(lStack_118 + 0x68))
            (lVar10,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_110);
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f062830);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61574(lVar6);
  func_0x000107c61170(uVar9);
  (**(code **)(lVar4 + 8))(lVar10,lVar5);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  *(undefined **)(lVar8 + 0xa8) = puVar7;
  func_0x0001000834e4(aplStack_b8);
  func_0x0001000834e4(alStack_90);
  return lVar8;
}



/* Entry: 10210e8fc; end: 10210ea43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10210e8fc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined8 *puVar7;
  long alStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  long *aplStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar6 = *param_1;
  ppuStack_48 = &PTR_DAT_1104cc138;
  lVar3 = 0;
  aplStack_68[0] = param_1;
  lStack_50 = lVar6;
  FUN_1021099a8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(aplStack_68,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  alStack_a0[2] = *puVar7;
  ppuStack_70 = &PTR_DAT_1104cc138;
  *(undefined **)(lVar4 + _DAT_112e59080) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar4 + _DAT_112e59088) = puVar1;
  lVar2 = _DAT_112e59090;
  lStack_78 = lVar6;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x00010006a360();
  *(long **)(lVar4 + lVar2) = param_1;
  FUN_10210ed24(alStack_a0 + 2,lVar4 + _DAT_112e59098);
  plVar5 = alStack_a0;
  alStack_a0[0] = lVar4;
  alStack_a0[1] = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a0 + 2);
  func_0x0001000834e4(aplStack_68);
  return plVar5;
}



/* Entry: 10210ea44; end: 10210ea7b;  */

void FUN_10210ea44(long param_1)

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



/* Entry: 10210ea7c; end: 10210eab7;  */

void FUN_10210ea7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10210eab8; end: 10210eb47;  */

void FUN_10210eab8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10210eb48; end: 10210ec47;  */

undefined * FUN_10210eb48(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e593a0,&UNK_10da5db48);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10210ec44);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10210ec48);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10210ec48; end: 10210ec7f;  */

long FUN_10210ec48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long *aplStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x20);
  auStack_140[3] = *(undefined8 *)(unaff_x20 + 0x28);
  auStack_140[2] = *(undefined8 *)(unaff_x20 + 0x30);
  auStack_140[1] = *(undefined8 *)(unaff_x20 + 0x38);
  plVar11 = *(long **)(unaff_x20 + 0x40);
  lVar15 = *plVar11;
  lVar5 = 0;
  func_0x000107c5f804();
  lStack_118 = *(long *)(lVar5 + -8);
  lStack_110 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar12 = (long)auStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x00010210a074();
  ppuStack_70 = &PTR_DAT_1104cbd08;
  lVar6 = 0;
  alStack_90[0] = lVar1;
  lStack_78 = lVar5;
  func_0x000102108ddc();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar14 = (undefined8 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar14);
  aplStack_b8[0] = (long *)*puVar14;
  ppuStack_98 = &PTR_DAT_1104cbd08;
  *(undefined **)(lVar7 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  lStack_a0 = lVar5;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar1);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined8 *)(lVar7 + 0x18) = uVar10;
  *(undefined **)(lVar7 + 0x20) = puVar8;
  FUN_10210ed0c(aplStack_b8,lVar7 + 0x28);
  func_0x0001000834e4(alStack_90);
  ppuStack_70 = &PTR_DAT_1104cbc78;
  ppuStack_98 = &PTR_DAT_1104cc138;
  lVar9 = 0;
  aplStack_b8[0] = plVar11;
  lStack_a0 = lVar15;
  alStack_90[0] = lVar7;
  lStack_78 = lVar6;
  func_0x00010210c5d4();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar14 = (undefined8 *)((long)puVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar14);
  func_0x0001000c6518(aplStack_b8,lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)puVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar13);
  auStack_e0[0] = *puVar14;
  auStack_108[0] = *puVar13;
  ppuStack_c0 = &PTR_DAT_1104cbc78;
  ppuStack_e8 = &PTR_DAT_1104cc138;
  lStack_f0 = lVar15;
  lStack_c8 = lVar6;
  func_0x000107c61614(lVar9 + 0x10,0);
  *(undefined8 *)(lVar9 + 0x18) = 0x708;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  func_0x0001000285a8(0x112e59398,&UNK_10da5db40);
  func_0x000107c613fc();
  uVar10 = auStack_140[1];
  func_0x000107c61174(auStack_140[1]);
  uVar2 = auStack_140[2];
  func_0x000107c61174(auStack_140[2]);
  uVar3 = auStack_140[3];
  func_0x000107c61174(auStack_140[3]);
  uVar4 = uStack_120;
  func_0x000107c61174(uStack_120);
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(long **)(lVar9 + 0x98) = plVar11;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined1 *)(lVar9 + 0xb8) = 1;
  *(undefined8 *)(lVar9 + 0x20) = uVar4;
  *(undefined8 *)(lVar9 + 0x28) = uVar3;
  *(undefined8 *)(lVar9 + 0x30) = uVar2;
  *(undefined8 *)(lVar9 + 0x38) = uVar10;
  FUN_10210ed24(auStack_108,lVar9 + 0x40);
  FUN_10210ed24(auStack_e0,lVar9 + 0x68);
  lVar5 = lStack_110;
  lVar1 = lStack_118;
  (**(code **)(lStack_118 + 0x68))
            (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_110);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f062830);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61574(lVar7);
  func_0x000107c61170(uVar10);
  (**(code **)(lVar1 + 8))(lVar12,lVar5);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  *(undefined **)(lVar9 + 0xa8) = puVar8;
  func_0x0001000834e4(aplStack_b8);
  func_0x0001000834e4(alStack_90);
  return lVar9;
}



/* Entry: 10210ec80; end: 10210ed0b;  */

void FUN_10210ec80(undefined8 param_1)

{
  if (lRam0000000112e592c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b0170);
  return;
}



/* Entry: 10210ed0c; end: 10210ed23;  */

undefined8 * FUN_10210ed0c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10210ed24; end: 10210ed67;  */

long FUN_10210ed24(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10210ed68; end: 10210ed77;  */

void FUN_10210ed68(long param_1,long param_2)

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



/* Entry: 10210ed78; end: 10210edd3;  */

void FUN_10210ed78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c(param_3);
  func_0x000107c61434();
  FUN_102110cc0();
  func_0x000107c61574(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 10210edd4; end: 10210ee5f;  */

uint FUN_10210edd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar4 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    func_0x000107c61434(lVar4);
    func_0x000100029284(uVar1,uVar2);
    func_0x000107c6142c(lVar4);
    uVar3 = (uint)uVar2 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 10210ee60; end: 10210ef8f;  */

void FUN_10210ee60(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar6 = *(long *)(param_2 + 0x10);
  lVar2 = lVar6;
  func_0x000107c61434();
  FUN_10210f8f8();
  func_0x000107c6142c(lVar6);
  lVar6 = lVar2;
  FUN_10210eff8();
  func_0x000107c61574(lVar2);
  lVar2 = lVar6;
  FUN_10210f248();
  func_0x000107c6142c(lVar6);
  puVar5 = *(undefined **)(lVar2 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    uVar3 = 0x112e593a0;
    func_0x0001000285a8(0x112e593a0,&UNK_10da5db48);
    func_0x000107c60498(puVar5,uVar3);
    puVar4 = puVar5;
  }
  func_0x000107c61434(lVar2);
  FUN_102110494();
  if (unaff_x21 != 0) {
    func_0x000107c615e4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10210ef90);
    (*pcVar1)();
  }
  func_0x000107c6142c(lVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 10210ef90; end: 10210eff7;  */

void FUN_10210ef90(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2;
  func_0x000107c4399c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = lVar2;
    func_0x000107c3d004();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4b8a4();
      func_0x000107c61180();
      if (lVar2 == 0) {
        return;
      }
    }
  }
  func_0x000107c61170();
  return;
}



/* Entry: 10210eff8; end: 10210f247;  */

undefined * FUN_10210eff8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    func_0x000102110864(0,lVar11,0);
    uVar1 = param_1 + 0x40;
    uVar16 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar9 = 0;
    iVar5 = *(int *)(param_1 + 0x24);
    do {
      if (uVar16 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f234);
        (*pcVar7)();
      }
      uVar13 = uVar16 >> 6;
      uVar14 = 1L << (uVar16 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f238);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f23c);
        (*pcVar7)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar16 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar16 * 8);
      uVar17 = *(ulong *)(puVar6 + 0x10);
      uVar8 = *(ulong *)(puVar6 + 0x18);
      func_0x000107c61434(uVar4);
      func_0x000107c61174();
      if (uVar8 >> 1 <= uVar17) {
        func_0x000102110864(1 < uVar8,uVar17 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar6 + uVar17 * 0x18 + 0x20) = uVar3;
      *(undefined8 *)(puVar6 + uVar17 * 0x18 + 0x28) = uVar4;
      *(undefined8 *)(puVar6 + uVar17 * 0x18 + 0x30) = uVar12;
      uVar17 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar17 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f240);
        (*pcVar7)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar8 & uVar14) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f244);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10210f248);
        (*pcVar7)();
      }
      uVar8 = uVar8 & -2L << (uVar16 & 0x3f);
      if (uVar8 == 0) {
        lVar15 = uVar13 << 6;
        puVar10 = (ulong *)(param_1 + 0x48 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar17 + 0x3f >> 6 <= uVar13) {
            FUN_102110c60(uVar16,iVar5,0);
            uVar16 = uVar17;
            goto LAB_10210f094;
          }
          uVar14 = *puVar10;
          lVar15 = lVar15 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar14 == 0);
        FUN_102110c60(uVar16,iVar5,0);
        uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + lVar15;
      }
      else {
        uVar13 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 & 0x7fffffffffffffc0;
      }
LAB_10210f094:
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar11);
  }
  return puVar6;
}



/* Entry: 10210f248; end: 10210f393;  */

undefined * FUN_10210f248(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    FUN_102110828(0,lVar5,0);
    puVar7 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar3 = puStack_68;
      uStack_98 = puVar7[-2];
      uStack_90 = puVar7[-1];
      uVar6 = *puVar7;
      uStack_88 = uVar6;
      func_0x000107c61434();
      func_0x000107c61174(uVar6);
      uVar6 = 0x112e59458;
      func_0x0001000285a8(0x112e59458,&UNK_10da5dbb8);
      uVar4 = 0x112e59460;
      func_0x0001000285a8(0x112e59460,&UNK_10da5dbc0);
      func_0x000107c6147c(&uStack_80,&uStack_98,uVar6,uVar4,7);
      uVar2 = uStack_70;
      uVar4 = uStack_78;
      uVar6 = uStack_80;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_102110828(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar7 = puVar7 + 3;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 0x18 + 0x20) = uVar6;
      *(undefined8 *)(puStack_68 + uVar1 * 0x18 + 0x30) = uVar2;
      *(undefined8 *)(puStack_68 + uVar1 * 0x18 + 0x28) = uVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 10210f394; end: 10210f577;  */

void FUN_10210f394(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar8 = *(long *)(param_2 + 0x10);
  puVar10 = (ulong *)(lVar8 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar7 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar7 = uVar7 & *puVar10;
  func_0x000107c61434(lVar8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = 0;
  lVar12 = lVar11;
  while( true ) {
    while (uVar7 != 0) {
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar11 * 0x200);
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000107c4399c();
      func_0x000107c61180();
      lVar12 = lVar11;
      if (lVar6 == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        func_0x000107c61170();
        puVar9 = puVar2;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          func_0x0001021108a0(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x0001021108a0(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
        *(long *)(puVar2 + uVar1 * 8 + 0x20) = lVar5;
      }
    }
    bVar4 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar13 >> 6) <= lVar11) {
      FUN_10210f810(lVar8,puVar10,~uVar13,lVar12,0);
      if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
        puVar9 = puVar2;
        func_0x000107c60480();
      }
      else {
        puVar9 = *(undefined **)(puVar2 + 0x10);
      }
      func_0x000107c61574(puVar2);
      *param_1 = puVar9;
      return;
    }
    uVar7 = puVar10[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10210f568);
  (*pcVar3)();
}



/* Entry: 10210f578; end: 10210f63b;  */

void FUN_10210f578(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined1 auStack_48 [24];
  undefined8 uStack_28;
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0x21,0);
  func_0x000107c61434(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61558(uVar2);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  FUN_102111070(param_2,FUN_102110c8c,0,uVar2,&uStack_28);
  if (unaff_x21 == 0) {
    func_0x000107c6142c(param_2);
    *(undefined8 *)(param_1 + 0x10) = uStack_28;
    func_0x000107c614a8(auStack_48);
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614ac();
  func_0x000107c614a8(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210f63c);
  (*pcVar1)();
}



/* Entry: 10210f63c; end: 10210f687;  */

void FUN_10210f63c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10210f688; end: 10210f7f7;  */

void FUN_10210f688(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *unaff_x20;
  uStack_38 = param_1;
  func_0x000100087bd4(0x102111058,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10210f7f8; end: 10210f80f;  */

void FUN_10210f7f8(void)

{
  FUN_10210f394();
  return;
}



/* Entry: 10210f810; end: 10210f817;  */

void FUN_10210f810(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10210f818; end: 10210f87f;  */

/* WARNING: Possible PIC construction at 0x00010210f848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010210f84c) */
/* WARNING: Removing unreachable block (ram,0x00010210f850) */

void FUN_10210f818(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112e59478;
    plVar5 = (long *)&UNK_10da5dbd8;
  }
  else {
    puVar3 = (ulong *)0x112e59298;
    plVar5 = (long *)&UNK_10da5dac0;
    unaff_x30 = 0x10210f84c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10210f880; end: 10210f8f7;  */

void FUN_10210f880(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021112c8(0,param_1,param_2);
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



/* Entry: 10210f8f8; end: 10210fb07;  */

undefined * FUN_10210f8f8(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *unaff_x21;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puStack_60;
  undefined *apuStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar13 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar10 = uVar14, func_0x000107c61594(uVar14,8), (uVar10 & 1) == 0)) {
      func_0x000107c6158c(uVar14,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_102110b88(apuStack_58,uVar14,uVar13,param_1,FUN_10210ef90,0,&puStack_60,FUN_10210fcac);
      puVar5 = apuStack_58[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_60;
      }
      uVar13 = 0xffffffffffffffff;
      puVar7 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar14);
      puVar1 = puVar5;
      goto joined_r0x00010210fac0;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined *)((long)apuStack_58 + (-8 - (uVar14 + 0xf & 0x3ffffffffffffff0)));
  func_0x000107c60ee4(puVar5,uVar14);
  puVar7 = param_1;
  FUN_10210fb08();
  puVar1 = unaff_x21;
joined_r0x00010210fac0:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    uVar13 = 0x12;
    puVar7 = (undefined *)0x0;
    func_0x000100029b9c();
    if (iVar4 != 0) {
      uVar13 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_60);
    }
    func_0x000107c61574();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  func_0x000107c60e78();
  lVar15 = 0;
  uVar10 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar7 + 0x40);
  lVar9 = 0;
LAB_10210fb70:
  do {
    if (uVar14 == 0) {
      do {
        lVar11 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10210fcac);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar11) {
          FUN_10210fe48(param_1,uVar13,lVar15,puVar7);
          return param_1;
        }
        uVar14 = *(ulong *)((long)(puVar7 + 0x40) + lVar11 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar11 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8);
    uVar17 = uVar8 | lVar11 << 6;
    uVar16 = *(undefined8 *)(*(long *)(puVar7 + 0x30) + uVar17 * 0x10 + 8);
    lVar12 = *(long *)(*(long *)(puVar7 + 0x38) + uVar17 * 8);
    func_0x000107c61434(uVar16);
    func_0x000107c61174();
    lVar6 = lVar12;
    func_0x000107c4399c();
    func_0x000107c61180();
    lVar9 = lVar11;
    if (lVar6 == 0) {
      lVar6 = lVar12;
      func_0x000107c3d004();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lVar6 = lVar12;
        func_0x000107c4b8a4();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c6142c(uVar16);
          func_0x000107c61170(lVar12);
          goto LAB_10210fb70;
        }
      }
    }
    func_0x000107c6142c(uVar16);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar6);
    uVar17 = (uVar8 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
    *(ulong *)(param_1 + uVar17) = *(ulong *)(param_1 + uVar17) | 1L << (uVar8 & 0x3f);
    bVar3 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10210fc74);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 10210fb08; end: 10210fcab;  */

void FUN_10210fb08(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  lVar9 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar5 = 0;
LAB_10210fb70:
  do {
    if (uVar10 == 0) {
      do {
        lVar7 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10210fcac);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
          FUN_10210fe48(param_1,param_2,lVar9,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar7];
        lVar5 = lVar5 + 1;
      } while (uVar10 == 0);
      uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar7 = lVar5;
    }
    uVar4 = LZCOUNT(uVar4);
    uVar12 = uVar4 | lVar7 << 6;
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10 + 8);
    lVar8 = *(long *)(*(long *)(param_3 + 0x38) + uVar12 * 8);
    func_0x000107c61434(uVar11);
    func_0x000107c61174();
    lVar3 = lVar8;
    func_0x000107c4399c();
    func_0x000107c61180();
    lVar5 = lVar7;
    if (lVar3 == 0) {
      lVar3 = lVar8;
      func_0x000107c3d004();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar3 = lVar8;
        func_0x000107c4b8a4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c6142c(uVar11);
          func_0x000107c61170(lVar8);
          goto LAB_10210fb70;
        }
      }
    }
    func_0x000107c6142c(uVar11);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar3);
    uVar12 = (uVar4 & 0xffffffffffffffc0 | lVar7 << 6) >> 3;
    *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar4 & 0x3f);
    bVar2 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210fc74);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 10210fcac; end: 10210fe47;  */

void FUN_10210fcac(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lStack_98;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_98 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_80 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_80 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_80 = uStack_80 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_80 == 0) {
      do {
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10210fe48);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          FUN_10210fe48(param_1,param_2,lStack_98,param_3);
          return;
        }
        uStack_80 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar6 = lVar6 + 1;
      } while (uStack_80 == 0);
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
    }
    else {
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
      lVar10 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar10 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    uStack_58 = uVar9;
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar9);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar9);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar10;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10210fe10);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10210fe48; end: 102110087;  */

undefined * FUN_10210fe48(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112e593a0,&UNK_10da5db48);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar15 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102110080);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar6;
            }
            uVar13 = param_1[lVar15];
            lVar9 = lVar9 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar15 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        func_0x000107c61174();
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar8 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102110084);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar8) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar14;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102110088);
          (*pcVar4)();
        }
        lVar9 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 102110088; end: 1021101f7;  */

void FUN_102110088(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e593a0,&UNK_10da5db48);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102110164;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102110164:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1021101f8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1021101d0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1021101d0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1021101f8; end: 102110493;  */

void FUN_1021101f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e593a0;
  func_0x0001000285a8(0x112e593a0,&UNK_10da5db48);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102110460:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102110490);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102110460;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102110494);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102110494; end: 102110827;  */

void FUN_102110494(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(ulong *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar14 = uVar13;
    uVar5 = uVar12;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_102110770:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102110774);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      FUN_1021101f8(lVar1,param_2 & 1);
      uVar14 = uVar13;
      uVar8 = uVar12;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_10211054c:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10211055c);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_102110088();
    }
    if ((uVar5 & 1) != 0) {
LAB_102110564:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar12;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102110828);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar12;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar14 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_102110774:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102110778);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar15 = (undefined8 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10211077c);
          (*pcVar3)();
        }
        uVar13 = puVar15[-2];
        uVar12 = puVar15[-1];
        uVar11 = *puVar15;
        lVar10 = *param_3;
        func_0x000107c61434(uVar12);
        func_0x000107c61174();
        uVar5 = uVar13;
        uVar8 = uVar12;
        func_0x000100029284();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_102110770;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          FUN_1021101f8(lVar1,1);
          uVar5 = uVar13;
          uVar9 = uVar12;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_10211054c;
        }
        if ((uVar8 & 1) != 0) goto LAB_102110564;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar12;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar11;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_102110774;
        uVar14 = uVar14 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar14);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 102110828; end: 1021108bb;  */

void FUN_102110828(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1021108bc();
  *unaff_x20 = param_1;
  return;
}


