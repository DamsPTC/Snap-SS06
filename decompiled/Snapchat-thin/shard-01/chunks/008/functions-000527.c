/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014da614; end: 1014da69b;  */

void FUN_1014da614(void)

{
  long unaff_x20;
  
  FUN_1014d22d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x31),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1014da69c; end: 1014da75b;  */

undefined1  [16] FUN_1014da69c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar4 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    func_0x000107c60e78();
    lVar9 = lVar4;
    func_0x000107c41800();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c42a38();
    if (-1 < (int)lVar5) {
      lVar5 = lVar9;
      func_0x000107c433e4();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar5 != 0) {
        lVar9 = lVar5;
        func_0x000107c412cc();
        if ((int)lVar9 == 7) {
          func_0x0001001115a4(lVar4,lVar5);
        }
        else if ((int)lVar9 == 0x11) {
          func_0x000107c318b0(lVar4,lVar5);
        }
        func_0x000107c61170(lVar5);
      }
      func_0x000107c42a38();
      puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      puVar2 = PTR___ss5Int32VN_11034ee20;
      puVar6 = PTR___ss5Int32VN_11034ee20;
      puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c();
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c6057c(puVar2,puVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar8);
      auVar1._8_8_ = puVar7;
      auVar1._0_8_ = puVar6;
      return auVar1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1014da888);
    (*pcVar3)();
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 1014da75c; end: 1014da887;  */

undefined1  [16] FUN_1014da75c(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar4 = param_1;
  func_0x000107c41800();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c42a38();
  if (-1 < (int)lVar5) {
    lVar5 = lVar4;
    func_0x000107c433e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c412cc();
      if ((int)lVar4 == 7) {
        func_0x0001001115a4(param_1,lVar5);
      }
      else if ((int)lVar4 == 0x11) {
        func_0x000107c318b0(param_1,lVar5);
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c42a38();
    puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    puVar2 = PTR___ss5Int32VN_11034ee20;
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c();
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c6057c(puVar2,puVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    auVar1._8_8_ = puVar7;
    auVar1._0_8_ = puVar6;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014da888);
  (*pcVar3)();
}



/* Entry: 1014da888; end: 1014da8af;  */

void FUN_1014da888(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,param_1);
  return;
}



/* Entry: 1014da8b0; end: 1014da8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014da8b0(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) goto LAB_1014d633c;
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar5 = 0x6e776f6e6b6e75;
      func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
      uVar3 = 0x6f6d656d5f776f6c;
      func_0x000107c5fadc(0x6f6d656d5f776f6c,0xea00000000007972);
      func_0x000107c5ce24(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      goto LAB_1014d6330;
    }
  }
  else {
    func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) goto LAB_1014d633c;
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar3 = 0x6f6d656d5f776f6c;
      func_0x000107c5fadc(0x6f6d656d5f776f6c,0xea00000000007972);
      func_0x000107c5ce28(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar2);
LAB_1014d6330:
      func_0x000107c61170(uVar3);
    }
  }
  func_0x000107c61170(lVar4);
LAB_1014d633c:
  (*pcVar1)(param_1 & 1,param_2);
  return;
}



/* Entry: 1014da8f8; end: 1014dab0f;  */

undefined1  [16] FUN_1014da8f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  
  uVar5 = 0;
  puVar4 = &uStack_70;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1014da9d8:
    lVar3 = 0;
    uVar5 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    lVar1 = 0x65707974;
    uVar6 = 0;
    func_0x000100029284(0x65707974);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_1014da9d8;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&uStack_60);
    func_0x000107c6142c(param_1);
    func_0x000107c6147c(&uStack_70,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar1 = lStack_68;
    uVar6 = uStack_70;
    if ((uVar5 & 1) == 0) goto LAB_1014da9d8;
    if (((uStack_70 != 0x747065637865736e) ||
        (lVar3 = -0x14ffffffff919097, uVar5 = 0x747065637865736e, lStack_68 != -0x14ffffffff919097))
       && (uVar2 = uStack_70,
          func_0x000107c605b8(uStack_70,lStack_68,0x747065637865736e,0xeb000000006e6f69,0),
          lVar3 = lVar1, uVar5 = uVar6, (uVar2 & 1) == 0)) goto LAB_1014daaa4;
  }
  uVar6 = uVar5;
  lVar1 = lVar3;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    lVar3 = 0x6e6f73616572;
    uVar5 = 0;
    func_0x000100029284(0x6e6f73616572);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&uStack_60);
      func_0x000107c6142c(param_1);
      func_0x000107c6147c(&uStack_70,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar4 & 1) != 0) {
        uStack_60 = uStack_70;
        lStack_58 = lStack_68;
        FUN_100e8b654();
        uVar5 = 0;
        func_0x000107c6022c(&UNK_1103cf2e8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0x2d545245535341;
          func_0x000107c5fbb4(0x2d545245535341,0xe700000000000000,uStack_70,lStack_68);
          func_0x000107c6142c(lStack_68);
          if ((uVar5 & 1) != 0) {
            func_0x000107c6142c(lVar1);
            lVar1 = -0x1a00000000000000;
            uVar6 = 0x747265737361;
          }
        }
        else {
          func_0x000107c6142c(lStack_68);
          func_0x000107c6142c(lVar1);
          lVar1 = -0x1d00000000000000;
          uVar6 = 0x726e61;
        }
      }
    }
  }
LAB_1014daaa4:
  auVar7._8_8_ = lVar1;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 1014dab10; end: 1014dab1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dab10(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar3 = 0x5f737365636f7270;
      func_0x000107c5fadc(0x5f737365636f7270,0xed00006873617263);
      func_0x000107c5ce28(lStack_60);
      func_0x000107c615e8(lStack_60);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar4);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8a10);
  (*pcVar1)();
}



/* Entry: 1014dab1c; end: 1014dab4f;  */

void FUN_1014dab1c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014dab50; end: 1014dab7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dab50(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c614cc(param_1,auStack_70,auStack_88);
    uVar2 = uStack_80;
    uVar5 = uStack_78;
    func_0x000107c60640(uStack_80,uStack_78);
    func_0x0001000d224c(&lStack_90);
    if (lStack_90 != 0) {
      uVar3 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar2,uVar5);
      uVar4 = 0x5f737365636f7270;
      func_0x000107c5fadc(0x5f737365636f7270,0xed00006873617263);
      func_0x000107c5ce24(lStack_90);
      func_0x000107c615e8(lStack_90);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(uVar5);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8b60);
  (*pcVar1)();
}



/* Entry: 1014dab80; end: 1014dabbb;  */

void FUN_1014dab80(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1014dabbc; end: 1014dabc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dabbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar2 = 0x617461665f6e6f6e;
      func_0x000107c5fadc(0x617461665f6e6f6e,0xec00000032765f6c);
      func_0x000107c5ce28(lStack_50);
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1014dabc8; end: 1014dabf3;  */

void FUN_1014dabc8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014dabf4; end: 1014dabff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dabf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c614cc(param_1,auStack_60,auStack_78);
    uVar1 = uStack_70;
    uVar4 = uStack_68;
    func_0x000107c60640(uStack_70,uStack_68);
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar1,uVar4);
      uVar3 = 0x617461665f6e6f6e;
      func_0x000107c5fadc(0x617461665f6e6f6e,0xec00000032765f6c);
      func_0x000107c5ce24(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1014dac00; end: 1014dac3f;  */

void FUN_1014dac00(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014dac40; end: 1014daceb;  */

void FUN_1014dac40(long param_1,long param_2)

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



/* Entry: 1014dacec; end: 1014dad47; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread threadName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dacec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112da9f20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da9f20);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1014dad48; end: 1014dad57; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread threadIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014dad48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112da9f28);
}



/* Entry: 1014dad58; end: 1014dad67; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread isCurrentThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1014dad58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112da9f30);
}



/* Entry: 1014dad68; end: 1014dad77; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread threadCpuUsage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014dad68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112da9f38);
}



/* Entry: 1014dad78; end: 1014dad87; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread isMaxCpuUsageThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1014dad78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112da9f40);
}



/* Entry: 1014dad88; end: 1014dadd3; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread stack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dad88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da9f48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112da9f48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1014dadd4; end: 1014dae9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dadd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9f20);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da9f28) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112da9f30) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112da9f38) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112da9f40) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9f48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014daea0; end: 1014daebf;  */

void FUN_1014daea0(void)

{
  func_0x000107c61168(&PTR_PTR_1127db558);
  return;
}



/* Entry: 1014daec0; end: 1014dafa7; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread initWithThreadName:threadIndex:isCurrentThread:threadCpuUsage:isMaxCpuUsageThread:stack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014daec0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    param_4 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_3;
  }
  func_0x000107c5faec();
  plVar1 = (long *)(param_2 + _DAT_112da9f20);
  *plVar1 = param_4;
  plVar1[1] = lVar3;
  *(undefined8 *)(param_2 + _DAT_112da9f28) = param_5;
  *(undefined1 *)(param_2 + _DAT_112da9f30) = param_6;
  *(undefined8 *)(param_2 + _DAT_112da9f38) = param_1;
  *(undefined1 *)(param_2 + _DAT_112da9f40) = param_7;
  puVar2 = (undefined8 *)(param_2 + _DAT_112da9f48);
  *puVar2 = param_8;
  puVar2[1] = param_3;
  FUN_1014daea0();
  lStack_70 = param_2;
  uStack_68 = param_8;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014dafa8; end: 1014dafd3; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread init] */

void FUN_1014dafa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCCapturedThread",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dafd4);
  (*pcVar1)();
}



/* Entry: 1014dafd4; end: 1014dafdf;  */

void FUN_1014dafd4(void)

{
  FUN_1014daea0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014dafe0; end: 1014db01f; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014db000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014db004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dafe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da9f20 + 8))
  ;
  return;
}



/* Entry: 1014db020; end: 1014db06b; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo threads] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014db020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da9f50);
  FUN_1014daea0();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014db06c; end: 1014db07b; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo appCpuUsage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014db06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112da9f58);
}



/* Entry: 1014db07c; end: 1014db08b; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo threadsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014db07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112da9f60);
}



/* Entry: 1014db08c; end: 1014db0d3; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo binaryImageInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014db08c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da9f68);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014db0d4; end: 1014db15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014db0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da9f50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da9f58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da9f60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da9f68) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014db160; end: 1014db17f;  */

void FUN_1014db160(void)

{
  func_0x000107c61168(&PTR_PTR_1127db640);
  return;
}



/* Entry: 1014db180; end: 1014db22f; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo initWithThreads:appCpuUsage:threadsCount:binaryImageInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014db180(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  FUN_1014daea0();
  func_0x000107c5fc54(param_4,lVar1);
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  *(undefined8 *)(param_2 + _DAT_112da9f50) = param_4;
  *(undefined8 *)(param_2 + _DAT_112da9f58) = param_1;
  *(undefined8 *)(param_2 + _DAT_112da9f60) = param_5;
  *(undefined8 *)(param_2 + _DAT_112da9f68) = param_6;
  FUN_1014db160();
  lStack_50 = param_2;
  uStack_48 = param_6;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014db230; end: 1014db25b; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo init] */

void FUN_1014db230(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCStackTracesWithBinaryImageInfo",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014db25c);
  (*pcVar1)();
}



/* Entry: 1014db25c; end: 1014db267;  */

void FUN_1014db25c(void)

{
  FUN_1014db160();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014db268; end: 1014db297;  */

void FUN_1014db268(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014db298; end: 1014db2cf; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014db2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014db2b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014db298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da9f50));
  return;
}



/* Entry: 1014db2d0; end: 1014db3b3;  */

void FUN_1014db2d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c6069c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014db3b4; end: 1014db3c7;  */

bool FUN_1014db3b4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1014db3c8; end: 1014db5b3;  */

long FUN_1014db3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x40) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 0x48) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x50) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = &UNK_1103cf6b8;
  func_0x000107c613fc(&UNK_1103cf6b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x0001000285a8(0x112da9fc0,&UNK_10d9512e0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_1014db81c;
  func_0x0001000bdd8c(FUN_1014db81c,puVar1);
  *(code **)(unaff_x20 + 0x58) = pcVar2;
  return unaff_x20;
}



/* Entry: 1014db5b4; end: 1014db81b;  */

/* WARNING: Removing unreachable block (ram,0x0001014db72c) */

void FUN_1014db5b4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef86e00);
    func_0x000107c3e814(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x0001000d224c(&lStack_68);
  lVar6 = lStack_68;
  if (lStack_68 == 0) {
LAB_1014db744:
    lVar5 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar4 = 0x800000010ef86de0;
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010ef86de0);
    puVar3 = PTR_PTR_1126af7d0;
    func_0x000107c610f8(PTR_PTR_1126af7d0);
    func_0x000107c453e4();
    lVar5 = lVar6;
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    if (lVar5 == 0) goto LAB_1014db744;
    lVar6 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) goto LAB_1014db744;
    lVar5 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    func_0x000107c610f8(PTR_PTR_1126a74f8);
    func_0x00010006c00c(lVar5,uVar4);
    lVar6 = lVar5;
    FUN_1014dd5e0(lVar5,uVar4);
    func_0x00010006c090(lVar5,uVar4);
    if (lVar6 != 0) {
      if ((lVar1 == 0) || (func_0x0001000d224c(&lStack_68), lStack_68 == 0)) {
        func_0x00010006c090(lVar5,uVar4);
      }
      else {
        func_0x000107c42888(lStack_68);
        func_0x00010006c090(lVar5,uVar4);
        func_0x000107c615e8(lStack_68);
      }
      goto LAB_1014db798;
    }
  }
  if ((lVar1 == 0) || (func_0x0001000d224c(&lStack_68), lStack_68 == 0)) {
    func_0x0001000b44c0(lVar5,uVar4);
  }
  else {
    func_0x000107c42888(lStack_68);
    func_0x0001000b44c0(lVar5,uVar4);
    func_0x000107c615e8(lStack_68);
  }
  lVar6 = 0;
LAB_1014db798:
  *param_1 = lVar6;
  return;
}



/* Entry: 1014db81c; end: 1014db823;  */

/* WARNING: Removing unreachable block (ram,0x0001014db72c) */

void FUN_1014db81c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef86e00);
    func_0x000107c3e814(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x0001000d224c(&lStack_68);
  lVar6 = lStack_68;
  if (lStack_68 == 0) {
LAB_1014db744:
    lVar5 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar4 = 0x800000010ef86de0;
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010ef86de0);
    puVar3 = PTR_PTR_1126af7d0;
    func_0x000107c610f8(PTR_PTR_1126af7d0);
    func_0x000107c453e4();
    lVar5 = lVar6;
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    if (lVar5 == 0) goto LAB_1014db744;
    lVar6 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) goto LAB_1014db744;
    lVar5 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    func_0x000107c610f8(PTR_PTR_1126a74f8);
    func_0x00010006c00c(lVar5,uVar4);
    lVar6 = lVar5;
    FUN_1014dd5e0(lVar5,uVar4);
    func_0x00010006c090(lVar5,uVar4);
    if (lVar6 != 0) {
      if ((lVar1 == 0) || (func_0x0001000d224c(&lStack_68), lStack_68 == 0)) {
        func_0x00010006c090(lVar5,uVar4);
      }
      else {
        func_0x000107c42888(lStack_68);
        func_0x00010006c090(lVar5,uVar4);
        func_0x000107c615e8(lStack_68);
      }
      goto LAB_1014db798;
    }
  }
  if ((lVar1 == 0) || (func_0x0001000d224c(&lStack_68), lStack_68 == 0)) {
    func_0x0001000b44c0(lVar5,uVar4);
  }
  else {
    func_0x000107c42888(lStack_68);
    func_0x0001000b44c0(lVar5,uVar4);
    func_0x000107c615e8(lStack_68);
  }
  lVar6 = 0;
LAB_1014db798:
  *param_1 = lVar6;
  return;
}



/* Entry: 1014db824; end: 1014db99f;  */

long FUN_1014db824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  func_0x0001000285a8(0x112da9fc8,&UNK_10d9b27d0);
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9fd0,&UNK_10d9512f0);
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c613fc(lVar4,0x60,7);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar4 + 0x40) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar4 + 0x48) = puVar3;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x50) = puVar3;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  *(undefined8 *)(lVar4 + 0x30) = param_5;
  *(undefined8 *)(lVar4 + 0x38) = param_6;
  puVar3 = &UNK_1103cf708;
  func_0x000107c613fc(&UNK_1103cf708,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  func_0x0001000285a8(0x112da9fc0,&UNK_10d9512e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x1014dda50;
  func_0x0001000bdd8c(0x1014dda50,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
  func_0x000107c61464();
  return lVar4;
}



/* Entry: 1014db9a0; end: 1014db9cb;  */

void FUN_1014db9a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014db9cc; end: 1014dba8f; -[_TtC17SCCrashThrottling19SCNonFatalThrottler initWithConfigProvider:tracer:percentRandomGenerator:dateProvider:] */

void FUN_1014db9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103cf850;
  func_0x000107c613fc(&UNK_1103cf850,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1103cf878;
  func_0x000107c613fc(&UNK_1103cf878,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1014db824(param_3,param_4,FUN_1014dd9e4,puVar1,0x1014dd9f0,puVar2);
  return;
}



/* Entry: 1014dba90; end: 1014dbacb;  */

void FUN_1014dba90(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  func_0x000107c61180();
  func_0x000107c5ee94(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1014dbacc; end: 1014dbb3f;  */

void FUN_1014dbacc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1014dbb40; end: 1014dc1bf;  */

undefined8 FUN_1014dbb40(double param_1,long *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [3];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  func_0x000107c61174();
  plVar3 = param_2;
  FUN_1014dd6a0();
  func_0x000107c61170(param_2);
  plVar4 = plVar3;
  uVar7 = param_3;
  FUN_1014dc1e8();
  (**(code **)(unaff_x20 + 0x30))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  dVar18 = param_1;
  (**(code **)(lVar15 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  fVar16 = SUB84(dVar18,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c4b940(uVar12);
  func_0x000107c515f4(plVar4);
  if (fVar16 == 0.0) {
    plVar5 = plVar4;
    func_0x000107c515f0();
    if ((int)plVar5 == 0) {
      fVar17 = 0.01;
    }
    else {
      plVar5 = plVar4;
      func_0x000107c515f0();
      fVar17 = (float)(int)plVar5 / 100.0;
      fVar16 = (float)(int)plVar5;
    }
  }
  else {
    fVar17 = fVar16;
    func_0x000107c515f4();
    fVar16 = fVar17;
  }
  (**(code **)(unaff_x20 + 0x20))();
  if (fVar17 <= fVar16) {
    uVar9 = 3;
    goto LAB_1014dc100;
  }
  plVar5 = plVar4;
  func_0x000107c41f38();
  if (((ulong)plVar5 & 1) == 0) {
    plVar5 = plVar4;
    func_0x000107c5c90c();
    if ((int)plVar5 == 0) {
      dVar18 = 900.0;
    }
    else {
      plVar5 = plVar4;
      func_0x000107c5c90c();
      dVar18 = (double)(int)plVar5;
    }
    if ((((uint)param_3 & 0xff) != 1) && (plVar5 = plVar4, func_0x000107c3dc28(), (int)plVar5 != 0))
    {
      puVar8 = auStack_a8;
      func_0x000107c61428(unaff_x20 + 0x40,puVar8,0x20,0);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      while ((*(long *)(lVar2 + 0x10) != 0 &&
             (plVar5 = plVar3, FUN_1014dc868(), ((ulong)puVar8 & 1) != 0))) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + (long)plVar5 * 8);
        func_0x000107c614a8(auStack_a8);
        if ((*(long *)(lVar2 + 0x10) == 0) || (param_1 - *(double *)(lVar2 + 0x20) < dVar18))
        goto LAB_1014dbdf8;
        func_0x000107c61428(unaff_x20 + 0x40,auStack_88,0x21,0);
        pcVar1 = (code *)auStack_a8;
        plVar5 = plVar3;
        FUN_1014dc714();
        lVar2 = *plVar5;
        if (lVar2 != 0) {
          lVar15 = *(long *)(lVar2 + 0x10);
          if (lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dc140);
            (*pcVar1)();
          }
          lVar6 = lVar2;
          func_0x000107c61558();
          *plVar5 = lVar2;
          if (((int)lVar6 == 0) || (*(ulong *)(lVar2 + 0x18) >> 1 < lVar15 - 1U)) {
            FUN_1014dd0d8();
            *plVar5 = lVar6;
            lVar2 = lVar6;
          }
          lVar15 = *(long *)(lVar2 + 0x10);
          func_0x000107c610b8(lVar2 + 0x20,lVar2 + 0x28,lVar15 * 8 + -8);
          *(long *)(lVar2 + 0x10) = lVar15 + -1;
          *plVar5 = lVar2;
        }
        (*pcVar1)(auStack_a8,0);
        func_0x000107c614a8(auStack_88);
        puVar8 = auStack_a8;
        func_0x000107c61428(unaff_x20 + 0x40,puVar8,0x20,0);
        lVar2 = *(long *)(unaff_x20 + 0x40);
      }
      func_0x000107c614a8(auStack_a8);
LAB_1014dbdf8:
      puVar8 = auStack_a8;
      func_0x000107c61428(unaff_x20 + 0x40,puVar8,0x20,0);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((*(long *)(lVar2 + 0x10) != 0) &&
         (plVar5 = plVar3, FUN_1014dc868(), puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8,
         ((ulong)puVar8 & 1) != 0)) {
        puVar10 = *(undefined **)(*(long *)(lVar2 + 0x38) + (long)plVar5 * 8);
        func_0x000107c61434(puVar10);
      }
      func_0x000107c614a8(auStack_a8);
      lVar2 = *(long *)(puVar10 + 0x10);
      func_0x000107c6142c(puVar10);
      plVar5 = plVar4;
      func_0x000107c3dc28();
      if ((int)plVar5 <= lVar2) goto LAB_1014dbc78;
      puVar8 = auStack_a8;
      func_0x000107c61428(unaff_x20 + 0x40,puVar8,0x20,0);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      if ((*(long *)(lVar2 + 0x10) == 0) ||
         (plVar5 = plVar3, FUN_1014dc868(), ((ulong)puVar8 & 1) == 0)) {
        func_0x000107c614a8(auStack_a8);
        lVar2 = 0x112d74b38;
        func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x18) = 2;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        *(double *)(lVar2 + 0x20) = param_1;
        func_0x000107c61428(unaff_x20 + 0x40,auStack_a8,0x21,0);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        func_0x000107c61558(uVar9);
        auStack_88[0] = *(undefined8 *)(unaff_x20 + 0x40);
        *(undefined8 *)(unaff_x20 + 0x40) = 0x8000000000000000;
        FUN_1014dc994(lVar2,plVar3,uVar9);
        *(undefined8 *)(unaff_x20 + 0x40) = auStack_88[0];
        func_0x000107c614a8(auStack_a8);
      }
      else {
        uVar14 = *(ulong *)(*(long *)(lVar2 + 0x38) + (long)plVar5 * 8);
        func_0x000107c614a8(auStack_a8);
        uVar11 = uVar14;
        func_0x000107c61434();
        func_0x000107c61558();
        uVar13 = uVar14;
        if ((uVar11 & 1) == 0) {
          uVar13 = 0;
          FUN_1014dd0d8(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
        }
        uVar11 = *(ulong *)(uVar13 + 0x10);
        uVar14 = uVar13;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
          uVar14 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_1014dd0d8(uVar14,uVar11 + 1,1,uVar13);
        }
        *(ulong *)(uVar14 + 0x10) = uVar11 + 1;
        *(double *)(uVar14 + uVar11 * 8 + 0x20) = param_1;
        func_0x000107c61428(unaff_x20 + 0x40,auStack_a8,0x21,0);
        func_0x000107c61434(uVar14);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        func_0x000107c61558(uVar9);
        auStack_88[0] = *(undefined8 *)(unaff_x20 + 0x40);
        *(undefined8 *)(unaff_x20 + 0x40) = 0x8000000000000000;
        FUN_1014dc994(uVar14,plVar3,uVar9);
        *(undefined8 *)(unaff_x20 + 0x40) = auStack_88[0];
        func_0x000107c614a8(auStack_a8);
        func_0x000107c6142c(uVar14);
      }
    }
    if (0 < (int)uVar7) {
      func_0x000107c61428(unaff_x20 + 0x48,auStack_a8,0,0);
      uVar11 = *(ulong *)(unaff_x20 + 0x48);
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 != 0) {
        dVar18 = *(double *)(uVar11 + 0x20);
        while (60.0 <= param_1 - dVar18) {
          func_0x000107c61428(unaff_x20 + 0x48,auStack_88,0x21,0);
          lVar2 = *(long *)(uVar11 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dc13c);
            (*pcVar1)();
          }
          uVar13 = uVar11;
          func_0x000107c61558();
          *(ulong *)(unaff_x20 + 0x48) = uVar11;
          if (((int)uVar13 == 0) || (*(ulong *)(uVar11 + 0x18) >> 1 < lVar2 - 1U)) {
            FUN_1014dd0d8();
            *(ulong *)(unaff_x20 + 0x48) = uVar13;
            uVar11 = uVar13;
          }
          lVar2 = *(long *)(uVar11 + 0x10);
          func_0x000107c610b8(uVar11 + 0x20,uVar11 + 0x28,lVar2 * 8 + -8);
          *(long *)(uVar11 + 0x10) = lVar2 + -1;
          *(ulong *)(unaff_x20 + 0x48) = uVar11;
          func_0x000107c614a8(auStack_88);
          uVar11 = *(ulong *)(unaff_x20 + 0x48);
          uVar13 = *(ulong *)(uVar11 + 0x10);
          if (uVar13 == 0) break;
          dVar18 = *(double *)(uVar11 + 0x20);
        }
      }
      if (uVar13 < (uVar7 & 0xffffffff)) {
        func_0x000107c61428(unaff_x20 + 0x48,auStack_88,0x21,0);
        uVar7 = uVar11;
        func_0x000107c61558();
        *(ulong *)(unaff_x20 + 0x48) = uVar11;
        uVar14 = uVar11;
        if ((uVar7 & 1) == 0) {
          uVar14 = 0;
          FUN_1014dd0d8(0,uVar13 + 1,1,uVar11);
          *(ulong *)(unaff_x20 + 0x48) = uVar14;
        }
        uVar7 = *(ulong *)(uVar14 + 0x10);
        uVar11 = uVar14;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar7) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_1014dd0d8(uVar11,uVar7 + 1,1,uVar14);
        }
        *(ulong *)(uVar11 + 0x10) = uVar7 + 1;
        *(double *)(uVar11 + uVar7 * 8 + 0x20) = param_1;
        *(ulong *)(unaff_x20 + 0x48) = uVar11;
        func_0x000107c614a8(auStack_88);
        uVar9 = 0;
        goto LAB_1014dc100;
      }
    }
    uVar9 = 2;
  }
  else {
LAB_1014dbc78:
    uVar9 = 1;
  }
LAB_1014dc100:
  func_0x000107c5d278(uVar12);
  func_0x000107c61170(plVar4);
  return uVar9;
}



/* Entry: 1014dc1c0; end: 1014dc1e7;  */

bool FUN_1014dc1c0(ulong param_1)

{
  FUN_1014dbb40();
  return (param_1 & 0xff) == 0;
}



/* Entry: 1014dc1e8; end: 1014dc713;  */

undefined1  [16] FUN_1014dc1e8(ulong param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined *puStack_68;
  
  func_0x000104875cd8(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 < (undefined *)0x2) {
    puVar7 = PTR_PTR_1126a74f0;
    func_0x000107c610f8(PTR_PTR_1126a74f0);
    func_0x000107c453e4();
    puVar15 = (undefined *)0x0;
    goto LAB_1014dc318;
  }
  puVar7 = puStack_68;
  func_0x000107c61174();
  puVar15 = puVar7;
  func_0x000107c44414();
  if ((int)puVar15 < 1) {
    puVar15 = (undefined *)0x1;
  }
  else {
    puVar15 = puVar7;
    func_0x000107c44414();
  }
  if (param_2 == '\x01') {
LAB_1014dc2f4:
    puVar7 = PTR_PTR_1126a74f0;
    func_0x000107c610f8(PTR_PTR_1126a74f0);
    func_0x000107c453e4();
    FUN_1014dda3c(puVar2);
  }
  else {
    func_0x000107c5c908();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) goto LAB_1014dc2f4;
    puStack_68 = (undefined *)0x0;
    uVar6 = 0;
    FUN_1014dd9f8(0);
    func_0x000107c5fc50(puVar7,&puStack_68,uVar6);
    func_0x000107c61170(puVar7);
    puVar3 = puStack_68;
    if (puStack_68 == (undefined *)0x0) goto LAB_1014dc2f4;
    puVar17 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((ulong)puStack_68 >> 0x3e == 0) {
      puVar14 = *(undefined **)(puVar17 + 0x10);
    }
    else {
      puVar14 = puStack_68;
      if (-1 < (long)puStack_68) {
        puVar14 = puVar17;
      }
      func_0x000107c60480();
    }
    if (puVar14 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      uVar13 = (ulong)puVar3 & 0xc000000000000001;
      do {
        if (uVar13 == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6b0);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puVar3 + (long)puVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar16;
          FUN_1014dd42c(puVar16,puVar3);
        }
        puVar1 = puVar16 + 1;
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6ac);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c44870();
        iVar12 = (int)param_1;
        if ((int)puVar8 != 0) {
          puVar8 = puVar7;
          func_0x000107c42a34();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc710);
            (*pcVar4)();
          }
          puVar9 = puVar8;
          func_0x000107c42a38();
          puVar10 = puVar8;
          func_0x000107c41800();
          func_0x000107c61180();
          puVar11 = puVar8;
          func_0x000107c42a38();
          if ((int)puVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6bc);
            (*pcVar4)();
          }
          puVar11 = puVar10;
          func_0x000107c433e4();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          if (puVar11 != (undefined *)0x0) {
            puVar10 = puVar11;
            func_0x000107c412cc();
            if ((int)puVar10 == 7) {
              puVar10 = puVar8;
              func_0x0001001115a4(puVar8,puVar11);
              iVar5 = (int)puVar10;
LAB_1014dc42c:
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar11);
              if (((int)puVar9 != iVar12) || (iVar5 != (int)(param_1 >> 0x20))) goto LAB_1014dc34c;
            }
            else {
              if ((int)puVar10 == 0x11) {
                puVar10 = puVar8;
                func_0x000107c318b0(puVar8,puVar11);
                iVar5 = (int)puVar10;
                goto LAB_1014dc42c;
              }
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar11);
              if (((int)puVar9 != iVar12) || (param_1 >> 0x20 != 0)) goto LAB_1014dc34c;
            }
            FUN_1014dda3c(puVar2);
            FUN_1014dda3c(puVar2);
            func_0x000107c6142c(puVar3);
            puVar15 = (undefined *)((ulong)puVar15 & 0xffffffff);
            goto LAB_1014dc318;
          }
          func_0x000107c61170(puVar8);
        }
LAB_1014dc34c:
        func_0x000107c61170(puVar7);
        puVar16 = puVar16 + 1;
      } while (puVar1 != puVar14);
      puVar16 = (undefined *)0x0;
      do {
        if (uVar13 == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6b8);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puVar3 + (long)puVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar16;
          FUN_1014dd42c(puVar16,puVar3);
        }
        puVar1 = puVar16 + 1;
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6b4);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c44870();
        if ((int)puVar8 != 0) {
          puVar8 = puVar7;
          func_0x000107c42a34();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc714);
            (*pcVar4)();
          }
          puVar9 = puVar8;
          func_0x000107c42a38();
          puVar10 = puVar8;
          func_0x000107c41800();
          func_0x000107c61180();
          puVar11 = puVar8;
          func_0x000107c42a38();
          if ((int)puVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6c0);
            (*pcVar4)();
          }
          puVar11 = puVar10;
          func_0x000107c433e4();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined *)0x0) {
            func_0x000107c61170(puVar7);
            puVar7 = puVar8;
          }
          else {
            puVar10 = puVar11;
            func_0x000107c412cc();
            if ((int)puVar10 == 7) {
              puVar10 = puVar8;
              func_0x0001001115a4(puVar8,puVar11);
              iVar5 = (int)puVar10;
LAB_1014dc590:
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar11);
              if (iVar5 != 0) goto LAB_1014dc4a0;
            }
            else {
              if ((int)puVar10 == 0x11) {
                puVar10 = puVar8;
                func_0x000107c318b0(puVar8,puVar11);
                iVar5 = (int)puVar10;
                goto LAB_1014dc590;
              }
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar11);
            }
            if ((int)puVar9 == iVar12) {
              FUN_1014dda3c(puVar2);
              func_0x000107c6142c(puVar3);
              FUN_1014dda3c(puVar2);
              puVar15 = (undefined *)((ulong)puVar15 & 0xffffffff);
              goto LAB_1014dc318;
            }
          }
        }
LAB_1014dc4a0:
        func_0x000107c61170(puVar7);
        puVar16 = puVar16 + 1;
      } while (puVar1 != puVar14);
      puVar16 = (undefined *)0x0;
      puVar15 = (undefined *)((ulong)puVar15 & 0xffffffff);
      do {
        if (uVar13 == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6c8);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puVar3 + (long)puVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar16;
          FUN_1014dd42c(puVar16,puVar3);
        }
        puVar1 = puVar16 + 1;
        if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014dc6c4);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c44870();
        if ((int)puVar8 == 0) {
          FUN_1014dda3c(puVar2);
          func_0x000107c6142c(puVar3);
          goto LAB_1014dc314;
        }
        func_0x000107c61170(puVar7);
        puVar16 = puVar16 + 1;
      } while (puVar1 != puVar14);
    }
    func_0x000107c6142c(puVar3);
    puVar7 = PTR_PTR_1126a74f0;
    func_0x000107c610f8(PTR_PTR_1126a74f0);
    func_0x000107c453e4();
    FUN_1014dda3c(puVar2);
  }
LAB_1014dc314:
  FUN_1014dda3c(puVar2);
LAB_1014dc318:
  auVar18._8_8_ = puVar15;
  auVar18._0_8_ = puVar7;
  return auVar18;
}



/* Entry: 1014dc714; end: 1014dc777;  */

code * FUN_1014dc714(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x8a2e);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x0001014dc8d0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1014dc778;
}



/* Entry: 1014dc778; end: 1014dc853;  */

void FUN_1014dc778(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1014dc854; end: 1014dc867;  */

bool FUN_1014dc854(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1014dc868; end: 1014dc957;  */

void FUN_1014dc868(ulong param_1)

{
  int *piVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = param_1 >> 0x20;
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6069c(param_1);
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    piVar1 = (int *)(*(long *)(unaff_x20 + 0x30) + uVar3 * 8);
    if (*piVar1 == (int)param_1 && piVar1[1] == (int)(param_1 >> 0x20)) {
      return;
    }
    uVar3 = uVar3 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1014dc958; end: 1014dc993;  */

void FUN_1014dc958(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1014dc994; end: 1014dcac3;  */

void FUN_1014dc994(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1014dc868();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dca58);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1014dcc90(lVar5);
    uVar2 = param_2;
    FUN_1014dc868();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1103cf828);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dca24);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1014dcb34();
    lVar5 = *unaff_x20;
    goto joined_r0x0001014dca6c;
  }
  lVar5 = *unaff_x20;
joined_r0x0001014dca6c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dcac4);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1014dcac4; end: 1014dcb33;  */

void FUN_1014dcac4(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    piVar1 = (int *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
    if (*piVar1 == (int)param_1 && piVar1[1] == (int)((ulong)param_1 >> 0x20)) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1014dcb34; end: 1014dcc8f;  */

void FUN_1014dcb34(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112daa0c8,&UNK_10d951480);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1014dcc10;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_1014dcc10:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014dcc90);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1014dcc68;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1014dcc68:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1014dcc90; end: 1014dd0d7;  */

void FUN_1014dcc90(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar17 = 0x112daa0c8;
  func_0x0001000285a8(0x112daa0c8,&UNK_10d951480);
  lVar7 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar17);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1014dcf00:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar7;
    return;
  }
  puVar15 = (ulong *)(lVar16 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014dcf30);
          (*pcVar6)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_1014dcf00;
        }
        uVar14 = puVar15[lVar18];
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
      lVar18 = lVar9;
    }
    lVar9 = (LZCOUNT(uVar8) | lVar18 << 6) * 8;
    puVar2 = (undefined4 *)(*(long *)(lVar16 + 0x30) + lVar9);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar8 = (ulong)uVar4;
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + lVar9);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar17);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    func_0x000107c6069c(uVar3);
    func_0x000107c6069c();
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar8 >> 6;
    uVar13 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar5 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar13 = uVar10 + 1;
        if ((uVar13 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014dcf34);
          (*pcVar6)();
        }
        uVar10 = 0;
        if (uVar13 != uVar8) {
          uVar10 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar8 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined4 *)(*(long *)(lVar7 + 0x30) + uVar8 * 8);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 8) = uVar17;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}



/* Entry: 1014dd0d8; end: 1014dd1d7;  */

undefined * FUN_1014dd0d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd1d8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014dd1d8; end: 1014dd2fb;  */

undefined1  [16] FUN_1014dd1d8(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar5 = param_2;
    func_0x000107c610a0();
  }
  else {
    uVar5 = 0x2e3;
    func_0x000107c61458();
  }
  *param_1 = (long)puVar3;
  puVar3[1] = param_2;
  puVar3[2] = unaff_x20;
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  FUN_1014dc868();
  *(byte *)(puVar3 + 4) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd2bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    param_3 = param_3 & 1;
    FUN_1014dcc90(lVar1);
    FUN_1014dc868();
    uVar4 = param_2;
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1103cf828);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd29c);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1014dcb34();
    puVar3[3] = uVar4;
    goto joined_r0x0001014dd2d0;
  }
  puVar3[3] = uVar4;
joined_r0x0001014dd2d0:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_1014dd2fc;
  return auVar10;
}



/* Entry: 1014dd2fc; end: 1014dd407;  */

void FUN_1014dd2fc(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  lVar3 = *plVar8;
  bVar1 = *(byte *)(plVar8 + 4);
  if ((param_2 & 1) == 0) {
    if (lVar3 == 0) goto LAB_1014dd384;
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) goto LAB_1014dd378;
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd408);
      (*pcVar2)();
    }
  }
  else {
    if (lVar3 == 0) {
LAB_1014dd384:
      if ((bVar1 & 1) != 0) {
        func_0x0001014dcf34(plVar8[3],*(undefined8 *)plVar8[2]);
      }
      goto LAB_1014dd3e4;
    }
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) {
LAB_1014dd378:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
      goto LAB_1014dd3e4;
    }
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd368);
      (*pcVar2)();
    }
  }
  *(long *)(lVar6 + 0x10) = lVar5 + 1;
LAB_1014dd3e4:
  lVar6 = *plVar8;
  func_0x000107c61434(lVar3);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar8);
  return;
}



/* Entry: 1014dd408; end: 1014dd42b;  */

undefined1  [16] FUN_1014dd408(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x1014dd420;
  return auVar1;
}



/* Entry: 1014dd42c; end: 1014dd5df;  */

ulong FUN_1014dd42c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd510);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd514);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a74f0;
    func_0x000107c61168(PTR_PTR_1126a74f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a74f0;
    func_0x000107c61168(PTR_PTR_1126a74f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1014dd9f8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014dd5e0);
  (*pcVar2)();
}



/* Entry: 1014dd5e0; end: 1014dd69f;  */

undefined1  [16] FUN_1014dd5e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    func_0x000107c60e78();
    uVar3 = uVar2;
    func_0x000107c42a38();
    uVar4 = uVar2;
    func_0x000107c41800();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c42a38();
    if (-1 < (int)uVar5) {
      uVar5 = uVar4;
      func_0x000107c433e4();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
        uVar2 = 0;
        uVar6 = 1;
      }
      else {
        uVar4 = uVar5;
        func_0x000107c412cc();
        if ((int)uVar4 == 7) {
          func_0x0001001115a4(uVar2,uVar5);
        }
        else if ((int)uVar4 == 0x11) {
          func_0x000107c318b0(uVar2,uVar5);
        }
        else {
          uVar2 = 0;
        }
        func_0x000107c61170(uVar5);
        uVar6 = 0;
        uVar2 = uVar3 & 0xffffffff | uVar2 << 0x20;
      }
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = uVar2;
      return auVar9;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dd774);
    (*pcVar1)();
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = unaff_x20;
  return auVar8;
}



/* Entry: 1014dd6a0; end: 1014dd773;  */

undefined1  [16] FUN_1014dd6a0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = param_1;
  func_0x000107c42a38();
  uVar2 = param_1;
  func_0x000107c41800();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c42a38();
  if (-1 < (int)uVar3) {
    uVar3 = uVar2;
    func_0x000107c433e4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
      uVar4 = 0;
      uVar5 = 1;
    }
    else {
      uVar2 = uVar3;
      func_0x000107c412cc();
      if ((int)uVar2 == 7) {
        func_0x0001001115a4(param_1,uVar3);
      }
      else if ((int)uVar2 == 0x11) {
        func_0x000107c318b0(param_1,uVar3);
      }
      else {
        param_1 = 0;
      }
      func_0x000107c61170(uVar3);
      uVar5 = 0;
      uVar4 = uVar4 & 0xffffffff | param_1 << 0x20;
    }
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dd774);
  (*pcVar1)();
}



/* Entry: 1014dd774; end: 1014dd777;  */

void FUN_1014dd774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d951350;
  func_0x000107c61520(&UNK_10d951350,&UNK_1103cf7b0);
  puRam0000000112da9fd8 = puVar1;
  return;
}



/* Entry: 1014dd778; end: 1014dd7d7;  */

void FUN_1014dd778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d951350;
  func_0x000107c61520(&UNK_10d951350,&UNK_1103cf7b0);
  puRam0000000112da9fd8 = puVar1;
  return;
}



/* Entry: 1014dd7d8; end: 1014dd9a3;  */

int FUN_1014dd7d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1014dd854;
        goto LAB_1014dd838;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1014dd838:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1014dd854:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1014dd9a4; end: 1014dd9e3;  */

void FUN_1014dd9a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daa0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d951414;
  func_0x000107c61520(&UNK_10d951414,&UNK_1103cf828);
  puRam0000000112daa0b8 = puVar1;
  return;
}



/* Entry: 1014dd9e4; end: 1014dd9f7;  */

void FUN_1014dd9e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001014dd9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1014dd9f8; end: 1014dda3b;  */

void FUN_1014dd9f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daa0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a74f0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112daa0c0 = puVar1;
  return;
}



/* Entry: 1014dda3c; end: 1014dda67;  */

void FUN_1014dda3c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1014dda68; end: 1014ddb3f;  */

void FUN_1014dda68(void)

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



/* Entry: 1014ddb40; end: 1014ddb4b;  */

void FUN_1014ddb40(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1014ddb4c; end: 1014ddbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ddb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daa0d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0f0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ddbe8; end: 1014ddd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1014ddbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x0001000285a8(0x112da9f18,&UNK_10d951250);
  uVar2 = param_1;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d7e4b0,&UNK_10d93c6b0);
  uVar3 = param_3;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d7e4b8,&UNK_10d951260);
  lVar4 = param_4;
  func_0x0001000bda74();
  lVar5 = lVar4;
  func_0x0001002c0d48();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112daa0d0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112daa0d8) = param_2;
  *(undefined8 *)(lVar6 + _DAT_112daa0e0) = uVar3;
  *(long *)(lVar6 + _DAT_112daa0e8) = lVar4;
  *(undefined8 *)(lVar6 + _DAT_112daa0f0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(lVar4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_70,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c614f0();
  func_0x000107c61464();
  return (undefined1 *)plVar7;
}



/* Entry: 1014ddd98; end: 1014dde23; -[_TtC21SnapAirNetworkingImpl24SCSnapAirNetworkExecutor initWithSpectrum:timeProvider:httpMetadataService:httpRequestModifier:performer:] */

void FUN_1014ddd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  FUN_1014ddbe8(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1014dde24; end: 1014dde53;  */

void FUN_1014dde24(void)

{
  func_0x0001002c0d48();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014dde54; end: 1014ddebb; -[_TtC21SnapAirNetworkingImpl24SCSnapAirNetworkExecutor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014dde80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014dde84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dde54(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112daa0d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112daa0d8));
  return;
}



/* Entry: 1014ddebc; end: 1014ddec3;  */

void FUN_1014ddebc(void)

{
  return;
}



/* Entry: 1014ddec4; end: 1014de52b;  */

void FUN_1014ddec4(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,code *param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  ulong uVar15;
  long extraout_x12;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  uStack_e8 = param_8;
  uStack_e0 = param_2;
  uStack_d0 = param_7;
  pcStack_c8 = param_6;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar20 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar20 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(lVar14 + 0x40);
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar16 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar21 - extraout_x12;
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  puVar5 = (undefined *)(param_5 + 0x10);
  func_0x000107c61618();
  uVar8 = uStack_e0;
  if (puVar5 == (undefined *)0x0) {
    return;
  }
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_1 == 2) {
    if (param_4 != 0) {
      func_0x000107c614b0(param_4);
      (*param_11)(param_4);
      func_0x000107c61170(puVar5);
      func_0x000107c614ac(param_4);
      return;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  else if (param_1 == 1) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  else {
    if (param_1 == 0) {
      if (param_3 >> 0x3c < 0xf) {
        uStack_f8 = param_12;
        pcStack_f0 = param_11;
        func_0x00010006c00c(uStack_e0,param_3);
        func_0x000107c5fb08(lVar20);
        uVar15 = param_3;
        func_0x000107c5faf0(uVar8,param_3,lVar20);
        if (uVar15 == 0) {
          func_0x0001000b44c0(uVar8,param_3);
          (**(code **)(lVar14 + 0x38))(lVar16,1,1,lStack_d8);
        }
        else {
          func_0x000107c5edd0(lVar16);
          func_0x000107c6142c(uVar15);
          lVar20 = lStack_d8;
          lVar6 = lVar16;
          (**(code **)(lVar14 + 0x30))(lVar16,1,lStack_d8);
          if ((int)lVar6 != 1) {
            uStack_118 = param_15;
            uStack_120 = param_14;
            uStack_128 = param_13;
            uStack_d0 = param_9;
            pcStack_c8 = (code *)param_10;
            pcStack_130 = *(code **)(lVar14 + 0x20);
            lStack_108 = lVar4;
            (*pcStack_130)(lVar4,lVar16,lVar20);
            uVar8 = uStack_d0;
            func_0x000107c5fadc(uStack_d0,pcStack_c8);
            uVar9 = uStack_e8;
            uStack_100 = param_3;
            func_0x000107c4f578();
            func_0x000107c61180();
            uStack_e8 = uVar9;
            func_0x000107c61170(uVar8);
            (**(code **)(lVar14 + 0x10))(lVar21,lVar4,lVar20);
            uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
            uVar17 = uVar15 + 0x28 & (uVar15 ^ 0xffffffffffffffff);
            uVar19 = lVar18 + uVar17 + 7 & 0xfffffffffffffff8;
            puVar7 = &UNK_1103cfac0;
            lStack_110 = lVar14;
            func_0x000107c613fc(&UNK_1103cfac0,uVar19 + 0x28,uVar15 | 7);
            uVar2 = uStack_f8;
            *(code **)(puVar7 + 0x10) = pcStack_f0;
            *(undefined8 *)(puVar7 + 0x18) = uStack_f8;
            *(undefined **)(puVar7 + 0x20) = puVar5;
            (*pcStack_130)(puVar7 + uVar17,lVar21,lVar20);
            pcVar3 = pcStack_c8;
            uVar9 = uStack_118;
            uVar8 = uStack_120;
            *(undefined8 *)(puVar7 + uVar19) = uStack_d0;
            *(code **)((long)(puVar7 + uVar19) + 8) = pcStack_c8;
            *(undefined8 *)(puVar7 + uVar19 + 0x10) = uStack_128;
            *(undefined8 *)((long)(puVar7 + uVar19 + 0x10) + 8) = uStack_120;
            *(undefined8 *)(puVar7 + uVar19 + 0x20) = uStack_118;
            puVar10 = &UNK_1103cfae8;
            func_0x000107c613fc(&UNK_1103cfae8,0x20,7);
            *(code **)(puVar10 + 0x10) = FUN_1014de718;
            *(undefined **)(puVar10 + 0x18) = puVar7;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_a0 = FUN_1014deb90;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            uStack_b0 = 0x100f15b68;
            puStack_a8 = &UNK_1103cfb00;
            ppuVar11 = &puStack_c0;
            puStack_98 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar10 = puStack_98;
            func_0x000107c6157c(uVar2);
            func_0x000107c61174(puVar5);
            func_0x000107c61434(pcVar3);
            func_0x000107c6157c(uVar8);
            func_0x000107c61574(puVar10);
            puVar10 = &UNK_1103cfb38;
            func_0x000107c613fc(&UNK_1103cfb38,0x28,7);
            *(code **)(puVar10 + 0x10) = pcStack_f0;
            *(undefined8 *)(puVar10 + 0x18) = uVar2;
            *(undefined8 *)(puVar10 + 0x20) = uVar9;
            puVar12 = &UNK_1103cfb60;
            func_0x000107c613fc(&UNK_1103cfb60,0x20,7);
            *(code **)(puVar12 + 0x10) = FUN_1014debb0;
            *(undefined **)(puVar12 + 0x18) = puVar10;
            pcStack_a0 = (code *)0x1014dee64;
            puStack_c0 = puVar1;
            uStack_b8 = 0x42000000;
            uStack_b0 = 0x100e27b38;
            puStack_a8 = &UNK_1103cfb78;
            ppuVar13 = &puStack_c0;
            puStack_98 = puVar12;
            func_0x000107c60bc4(ppuVar13);
            puVar12 = puStack_98;
            func_0x000107c6157c(uVar2);
            func_0x000107c61574(puVar12);
            uVar8 = uStack_e8;
            func_0x000107c4c754(uStack_e8);
            func_0x0001000b44c0(uStack_e0,uStack_100);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(uVar8);
            (**(code **)(lStack_110 + 8))(lStack_108,lStack_d8);
            func_0x000107c61574(puVar10);
            func_0x000107c61574(puVar7);
            return;
          }
          func_0x0001000b44c0(uVar8,param_3);
        }
        FUN_1014deca0(lVar16,0x112d36580,&UNK_10d9016d0);
      }
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar8 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
      func_0x000107c466bc(puVar7);
      func_0x000107c61170(uVar8);
      (*pcStack_c8)(puVar7);
      func_0x000107c61170(puVar5);
      puVar5 = puVar7;
      goto LAB_1014de258;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  func_0x000107c466bc(puVar7);
  func_0x000107c61170(uVar8);
  (*param_11)(puVar7);
  func_0x000107c61170(puVar7);
LAB_1014de258:
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1014de52c; end: 1014de557;  */

undefined1  [16] FUN_1014de52c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1014de558; end: 1014de5a7;  */

void FUN_1014de558(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4bf64(uVar1);
  func_0x000107c61170(uVar3);
  (*pcVar2)();
  return;
}



/* Entry: 1014de5a8; end: 1014de5db;  */

void FUN_1014de5a8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014de5dc; end: 1014de63b;  */

void FUN_1014de5dc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4bf64(uVar1);
  func_0x000107c61170(uVar3);
  (*pcVar2)(param_1);
  return;
}



/* Entry: 1014de63c; end: 1014de68b;  */

void FUN_1014de63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  FUN_1014ddec4(param_2,param_4,param_5,param_6,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1014de68c; end: 1014de68f;  */

void FUN_1014de68c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daa0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d951490;
  func_0x000107c61520(&UNK_10d951490,&UNK_1103cfa50);
  puRam0000000112daa0f8 = puVar1;
  return;
}



/* Entry: 1014de690; end: 1014de6cf;  */

void FUN_1014de690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daa0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d951490;
  func_0x000107c61520(&UNK_10d951490,&UNK_1103cfa50);
  puRam0000000112daa0f8 = puVar1;
  return;
}



/* Entry: 1014de6d0; end: 1014de6df;  */

undefined1  [16] FUN_1014de6d0(void)

{
  return ZEXT816(0x1103cfa50);
}



/* Entry: 1014de6e0; end: 1014de717;  */

void FUN_1014de6e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014de718; end: 1014deb8f;  */

/* WARNING: Possible PIC construction at 0x0001014de804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014de97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014de98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014dea40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014deb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014deb38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014deb1c) */
/* WARNING: Removing unreachable block (ram,0x0001014dea44) */
/* WARNING: Removing unreachable block (ram,0x0001014deb8c) */
/* WARNING: Removing unreachable block (ram,0x0001014dea60) */
/* WARNING: Removing unreachable block (ram,0x0001014de990) */
/* WARNING: Removing unreachable block (ram,0x0001014deb88) */
/* WARNING: Removing unreachable block (ram,0x0001014de9c0) */
/* WARNING: Removing unreachable block (ram,0x0001014deb44) */
/* WARNING: Removing unreachable block (ram,0x0001014de9dc) */
/* WARNING: Removing unreachable block (ram,0x0001014de980) */
/* WARNING: Removing unreachable block (ram,0x0001014de808) */
/* WARNING: Removing unreachable block (ram,0x0001014deb3c) */
/* WARNING: Removing unreachable block (ram,0x0001014deb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014de718(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c5ede0();
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_98 = 0xf000000000000000;
    puStack_a0 = (undefined *)0x0;
    func_0x000107c5ee2c(param_1,&puStack_a0);
    uVar2 = uStack_98;
    puVar3 = puStack_a0;
    if (uStack_98 >> 0x3c < 0xf) {
      func_0x000107c614f0();
      func_0x0001000d224c(&puStack_a0);
      puVar1 = puStack_a0;
      if (puStack_a0 == (undefined *)0x0) {
        func_0x0001000b44c0(puVar3,uVar2);
        return;
      }
      func_0x000107c5ed90();
      lVar4 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61538();
      lVar5 = lVar4;
      func_0x0001001830b8();
      FUN_1014deca0(lVar4 + 0x20,0x112d38308,&UNK_10d902040);
      func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar5);
      func_0x000107c5ee20(puVar3,uVar2);
      uStack_80 = 0x1014ddec0;
      uStack_78 = 0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_101365b04;
      puStack_88 = &UNK_1103cfba0;
      ppuVar6 = &puStack_a0;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(uStack_78);
      func_0x000107c3ecec(puVar1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      goto code_r0x000107c61170;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  func_0x000107c466bc(puVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1014deb90; end: 1014debaf;  */

void FUN_1014deb90(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014debb0; end: 1014dec9f;  */

void FUN_1014debb0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_40;
  long lStack_38;
  
  uVar3 = 0;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    lStack_38 = param_1;
    func_0x000107c614b0();
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar2 = 0;
    func_0x000100ea57c8(0);
    func_0x000107c6147c(&puStack_40,&lStack_38,uVar5,uVar2,6);
    if ((uVar3 & 1) != 0) {
      puVar4 = puStack_40;
      func_0x000107c61174(puStack_40);
      (*pcVar1)();
      func_0x000107c61170(puVar4);
      goto LAB_1014dec84;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar5);
  (*pcVar1)(puVar4);
LAB_1014dec84:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1014deca0; end: 1014decdf;  */

undefined8 FUN_1014deca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014dece0; end: 1014dee3b;  */

/* WARNING: Possible PIC construction at 0x0001014dee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014dee20) */

void FUN_1014dece0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long in_x5;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_2 == 2) {
    if (in_x5 != 0) {
      func_0x000107c614b0(in_x5);
      (*pcVar1)(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(in_x5);
      return;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  else if (param_2 == 1) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  else {
    if (param_2 == 0) {
      (**(code **)(unaff_x20 + 0x10))();
      return;
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef86e30);
  }
  func_0x000107c466bc(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1014dee3c; end: 1014deec7;  */

void FUN_1014dee3c(long param_1,long param_2)

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



/* Entry: 1014deec8; end: 1014def0b;  */

void FUN_1014deec8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1014defd4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d0008;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1014def0c; end: 1014def13;  */

void FUN_1014def0c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1014defd4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d0008;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}


