/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10152c088; end: 10152c0bb;  */

void FUN_10152c088(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10152c0bc; end: 10152c0f3; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c0bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112db0aa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db0aa8));
  return;
}



/* Entry: 10152c0f4; end: 10152c343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c0f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = param_2;
  func_0x000107c614f0();
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10152c200);
      (*pcVar3)();
    }
    lVar4 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      param_2 = lVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar4);
      param_3 = lVar6;
      goto LAB_10152c1a4;
    }
  }
  func_0x00010006c00c(param_2,param_3);
LAB_10152c1a4:
  plVar1 = (long *)(unaff_x20 + _DAT_112db0bc8);
  *plVar1 = param_2;
  plVar1[1] = param_3;
  *(long *)(unaff_x20 + _DAT_112db0bd0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar2);
  return;
}



/* Entry: 10152c344; end: 10152c38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c344(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  dVar7 = *(double *)(unaff_x20 + 0x18);
  plVar5 = &lStack_60;
  lVar1 = 0;
  FUN_10152c3c4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c49804();
    func_0x000107c61170(lVar3);
    dVar7 = (double)(int)lVar4;
  }
  *(double *)(lVar2 + _DAT_112db0ac0) = dVar7;
  *(long *)(lVar2 + _DAT_112db0ac8) = param_1;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c43b74(uVar6);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 10152c38c; end: 10152c3ab;  */

void FUN_10152c38c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e00b8);
  return;
}



/* Entry: 10152c3ac; end: 10152c3c3;  */

void FUN_10152c3ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010152c424(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c61434(uVar3);
  FUN_10152ae54(param_1,uVar2,uVar3);
  func_0x000107c43b74(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10152c3c4; end: 10152c463;  */

void FUN_10152c3c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127dfe60);
  return;
}



/* Entry: 10152c464; end: 10152c473;  */

undefined1  [16] FUN_10152c464(void)

{
  return ZEXT816(0x1103da370);
}



/* Entry: 10152c474; end: 10152c493;  */

void FUN_10152c474(void)

{
  func_0x000107c61168(&PTR_PTR_1127e0310);
  return;
}



/* Entry: 10152c494; end: 10152c4e3;  */

void FUN_10152c494(long param_1,long param_2)

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



/* Entry: 10152c4e4; end: 10152c59f;  */

undefined8 FUN_10152c4e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c444a4(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c4f91c(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 10152c5a0; end: 10152c5a7;  */

void FUN_10152c5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10152c5a8; end: 10152c5f3;  */

void FUN_10152c5a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10152c5f4,param_1);
  return;
}



/* Entry: 10152c5f4; end: 10152c65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c5f4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_10152c76c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112db0c38) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 10152c65c; end: 10152c6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c65c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112db0c38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10152c6a8; end: 10152c717; -[_TtC34ComposerJobSchedulerPluginProvider26ComposerJobSchedulerPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10152c6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30ddc(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 10152c718; end: 10152c74b;  */

void FUN_10152c718(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10152c74c; end: 10152c75b;  */

undefined1  [16] FUN_10152c74c(void)

{
  return ZEXT816(0x1103da500);
}



/* Entry: 10152c75c; end: 10152c76b; -[_TtC34ComposerJobSchedulerPluginProvider26ComposerJobSchedulerPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152c75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112db0c38));
  return;
}



/* Entry: 10152c76c; end: 10152c78b;  */

void FUN_10152c76c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e03d8);
  return;
}



/* Entry: 10152c78c; end: 10152c7ab;  */

undefined1  [16] FUN_10152c78c(void)

{
  return ZEXT816(0x1103da620);
}



/* Entry: 10152c7ac; end: 10152c7fb;  */

void FUN_10152c7ac(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7710;
  func_0x000107c610f8();
  func_0x000107c466fc();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10152c7fc; end: 10152c82b;  */

void FUN_10152c7fc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10152c82c; end: 10152c84f;  */

void FUN_10152c82c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10152c850; end: 10152c897;  */

undefined1  [16] FUN_10152c850(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c42884(uStack_28);
  func_0x000107c61170(uStack_28);
  return ZEXT816(0);
}



/* Entry: 10152c898; end: 10152c8f3;  */

undefined ** FUN_10152c898(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10152c8f4; end: 10152c947;  */

undefined8 FUN_10152c8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009cac50(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10152c948; end: 10152c9e7;  */

undefined1  [16] FUN_10152c948(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c42884(uStack_28);
  func_0x000107c61170(uStack_28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar1);
  uVar3 = uVar2;
  func_0x000107c6157c();
  func_0x00010485773c();
  if ((uVar3 & 1) == 0) {
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
    pcVar4 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &UNK_1103dab20;
    func_0x000107c613fc(&UNK_1103dab20,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(ulong *)(puVar5 + 0x18) = uVar2;
    pcVar4 = FUN_10152d230;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = pcVar4;
  return auVar6;
}



/* Entry: 10152c9e8; end: 10152c9f7;  */

void FUN_10152c9e8(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010076e5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10152c9f8; end: 10152cb1f;  */

ulong FUN_10152c9f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10152cb20);
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
  FUN_10152cb20(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10152cb1c);
      (*pcVar1)();
    }
    FUN_10152cba0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10152cb20; end: 10152cb9f;  */

undefined * FUN_10152cb20(undefined *param_1,undefined *param_2)

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
    func_0x000100769448();
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



/* Entry: 10152cba0; end: 10152ccb7;  */

long FUN_10152cba0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10152ccb4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10152ccb8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010076637c(0,0x112db0eb8,&PTR_PTR_1126b4ea0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010076637c(0,0x112db0eb8,&PTR_PTR_1126b4ea0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10152ccb0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10152ccb8; end: 10152ce5b;  */

ulong FUN_10152ccb8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10152cd90);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10152cd94);
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
  func_0x000107c5fb78(0xd000000000000014,0x800000010efb0560);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10152ce5c);
  (*pcVar2)();
}



/* Entry: 10152ce5c; end: 10152ce67;  */

void FUN_10152ce5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar4 = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48);
  func_0x000100766d98();
  func_0x000107c61574(uStack_48);
  uVar2 = 0;
  func_0x000100766df4(0,0,uVar1,uVar4);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126b80b0;
  func_0x000107c610f8();
  func_0x000107c46c3c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10152ce68; end: 10152d03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ce68(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_11307e0b8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b8288;
  func_0x000107c610f8(PTR_PTR_1126b8288);
  func_0x000107c487ec();
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efb05c0);
  lVar5 = lVar1;
  func_0x000107c4e60c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar1);
  uVar6 = 0;
  func_0x00010076637c(0,0x112db0eb0,&PTR_PTR_1126b4ec0);
  func_0x000107c614e8();
  func_0x000107c615f0(lVar5);
  func_0x000107c610f8(uVar6);
  func_0x000107c47de8();
  func_0x000107c615e8(lVar5);
  puVar7 = PTR_PTR_1126b80b8;
  func_0x000107c61168();
  func_0x000100083b20(&lStack_58);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(uVar6);
  uVar4 = uVar6;
  func_0x000100768818();
  func_0x000107c4d624();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lStack_58);
  *param_1 = puVar7;
  return;
}



/* Entry: 10152d03c; end: 10152d22f;  */

void FUN_10152d03c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb0580);
  lVar4 = lVar1;
  func_0x000107c4e60c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar1);
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c41798();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10152d214);
    (*pcVar2)();
  }
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar7 = PTR_PTR_1126a7720;
  func_0x000107c610f8(PTR_PTR_1126a7720);
  func_0x000107c46b9c();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    puVar6 = PTR_PTR_1126a7728;
    func_0x000107c610f8(PTR_PTR_1126a7728);
    func_0x000107c453e4();
    func_0x000100083b20(&lStack_68);
    puVar8 = PTR_PTR_1126a7730;
    func_0x000107c610f8();
    func_0x000107c4811c();
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    *param_1 = puVar8;
    return;
  }
  func_0x0001048d9980(0xd000000000000028,0x800000010efb0530);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10152d230);
  (*pcVar2)();
}



/* Entry: 10152d230; end: 10152d31b;  */

void FUN_10152d230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_48);
  puVar3 = &UNK_1103dad28;
  func_0x000107c613fc(&UNK_1103dad28,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_58 = FUN_10152d408;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000b0c7c;
  puStack_60 = &UNK_1103dad40;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_50;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4f2c0(uStack_48);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 10152d31c; end: 10152d407;  */

undefined ** FUN_10152d31c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10152d408; end: 10152d48b;  */

void FUN_10152d408(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c5af48(uStack_38);
  func_0x000107c615e8();
  func_0x00010485773c();
  if ((uVar2 & 1) != 0) {
    func_0x000100083b20(&uStack_38);
    func_0x000107c5af48(uStack_38);
    func_0x000107c61170(uStack_38);
  }
  (*pcVar1)();
  return;
}



/* Entry: 10152d48c; end: 10152d4af;  */

undefined8 FUN_10152d48c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 10152d4b0; end: 10152d4d3;  */

void FUN_10152d4b0(long param_1,long param_2)

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



/* Entry: 10152d4d4; end: 10152d4ff;  */

void FUN_10152d4d4(void)

{
  func_0x000107c610f8(PTR_PTR_1126c3868);
                    /* WARNING: Could not recover jumptable at 0x00010c00d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10152d500; end: 10152d507;  */

void FUN_10152d500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10152d508; end: 10152d56f;  */

void FUN_10152d508(void)

{
  func_0x000107c610f8(PTR_PTR_1126a7760);
                    /* WARNING: Could not recover jumptable at 0x00010bffe210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10152d570; end: 10152d59b;  */

void FUN_10152d570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10152d59c; end: 10152d607;  */

undefined8 FUN_10152d59c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c5b6b8(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10152d608; end: 10152d617;  */

undefined8 FUN_10152d608(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c5b6b8(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10152d618; end: 10152d66b;  */

void FUN_10152d618(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7770;
  func_0x000107c610f8();
  func_0x000107c48808();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10152d66c; end: 10152d6d3;  */

void FUN_10152d66c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7770;
  func_0x000107c610f8();
  func_0x000107c48808();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 10152d6d4; end: 10152d76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152d6d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112db0f00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112db0f08) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c52a20();
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 10152d770; end: 10152d77f; -[_TtC30UserUnifiedGRPCServiceProvider38ComposerAuthContextDelegateProxySetter getAuthContext:callback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152d770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112db0f00),PTR_s_getAuthContext_callback__1125ce430);
  return;
}



/* Entry: 10152d780; end: 10152d7df; -[_TtC30UserUnifiedGRPCServiceProvider38ComposerAuthContextDelegateProxySetter init] */

void FUN_10152d780(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserUnifiedGRPCServiceProvider.ComposerAuthContextDelegateProxySetter",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152d7ac);
  (*pcVar1)();
}



/* Entry: 10152d7e0; end: 10152d817; -[_TtC30UserUnifiedGRPCServiceProvider38ComposerAuthContextDelegateProxySetter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152d7e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112db0f00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0f08));
  return;
}



/* Entry: 10152d818; end: 10152d857;  */

undefined1  [16] FUN_10152d818(void)

{
  return ZEXT816(0x1103db448);
}



/* Entry: 10152d858; end: 10152d887;  */

void FUN_10152d858(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10152d888; end: 10152d8ab;  */

void FUN_10152d888(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10152d8ac; end: 10152d8e3;  */

undefined1  [16] FUN_10152d8ac(void)

{
  return ZEXT816(0);
}



/* Entry: 10152d8e4; end: 10152d99b;  */

long FUN_10152d8e4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_40 = &UNK_100619b0c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100619acc;
  puStack_48 = &UNK_1103db5c0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10152d99c; end: 10152d9bf;  */

void FUN_10152d99c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10152d9c0; end: 10152da3f;  */

long FUN_10152d9c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar1 = PTR_PTR_1126e06c0;
  func_0x000107c61168(PTR_PTR_1126e06c0);
  uVar2 = param_1;
  func_0x000107c6157c(param_1);
  func_0x0001000ad7c4();
  func_0x000107c527b0(puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 10152da40; end: 10152da63;  */

void FUN_10152da40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10152da64; end: 10152dabf;  */

undefined1  [16] FUN_10152da64(void)

{
  return ZEXT816(0);
}



/* Entry: 10152dac0; end: 10152daef;  */

void FUN_10152dac0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10152daf0; end: 10152dbf3;  */

void FUN_10152daf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001000ad274(0);
  func_0x0001048cdfb8();
  uVar2 = uVar1;
  func_0x0001000ad2e8();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar4 = &UNK_1103db9b0;
  func_0x000107c613fc(&UNK_1103db9b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_2);
  uVar1 = uVar2;
  func_0x0001000ab368(uVar2,uVar3,0,0,0x10152ddc8,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10152dbf4; end: 10152dca3;  */

void FUN_10152dbf4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x000107c421c8(param_2);
  func_0x000107c61180();
  func_0x000107c4ec80(param_2);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b81f0;
  func_0x000107c610f8(PTR_PTR_1126b81f0);
  func_0x000107c453e4();
  uVar3 = uVar1;
  func_0x000107c30678(uVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  (*param_3)();
  return;
}



/* Entry: 10152dca4; end: 10152dcab;  */

void FUN_10152dca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001000ad274(0);
  func_0x0001048cdfb8();
  uVar2 = uVar1;
  func_0x0001000ad2e8();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar4 = &UNK_1103db9b0;
  func_0x000107c613fc(&UNK_1103db9b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(param_2);
  uVar1 = uVar2;
  func_0x0001000ab368(uVar2,uVar3,0,0,0x10152ddc8,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10152dcac; end: 10152dccf;  */

void FUN_10152dcac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10152dcd0; end: 10152dd83;  */

undefined1  [16] FUN_10152dcd0(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_28;
  
  func_0x00010485773c();
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&uStack_28);
    puVar2 = &UNK_1103db960;
    func_0x000107c613fc(&UNK_1103db960,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uStack_28;
    uVar1 = 0x10152ddd4;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10152dd84; end: 10152dde7;  */

undefined ** FUN_10152dd84(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10152dde8; end: 10152de1b;  */

void FUN_10152dde8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10152de1c; end: 10152de73; -[_TtC23WebBrowserLogoutCleanup24WebBrowsingLogoutHandler cleanUpUserData] */

void FUN_10152de1c(void)

{
  func_0x000107c61168(PTR_PTR_1126b4f58);
  func_0x000107c3fa74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10152de74; end: 10152de8b; -[_TtC32WebBrowsingUserDataLogoutCleanup39WebBrowsingUserDataLogoutCleanupHandler cleanUpUserData] */

void FUN_10152de74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10152de8c; end: 10152e4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10152de8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x000100a84a9c();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_19;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_20;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_21;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_22;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_23;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112db12d8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112db12e0) = param_24;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10152e4e4);
  (*pcVar2)();
}



/* Entry: 10152e4e4; end: 10152e543; -[_TtC27UserSessionScopeGraphBridge42UserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_10152e4e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.UserSessionScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152e510);
  (*pcVar1)();
}



/* Entry: 10152e544; end: 10152e57b; -[_TtC27UserSessionScopeGraphBridge42UserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010152e560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010152e564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152e544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db12d8));
  return;
}



/* Entry: 10152e57c; end: 10152e5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152e57c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112db12e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112db12d8));
  return;
}



/* Entry: 10152e5a4; end: 10152e63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152e5a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db2470);
  *(undefined8 *)(unaff_x20 + _DAT_112db1310) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db1318) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152e640; end: 10152e69f; -[_TtC27UserSessionScopeGraphBridge55PreviewLensIconImpressionLoggingServicesSaberEntryPoint init] */

void FUN_10152e640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.PreviewLensIconImpressionLoggingServicesSaberEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152e66c);
  (*pcVar1)();
}



/* Entry: 10152e6a0; end: 10152e733; -[_TtC27UserSessionScopeGraphBridge55PreviewLensIconImpressionLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152e6a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db1310));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db1318));
  return;
}



/* Entry: 10152e734; end: 10152e73b;  */

undefined8 FUN_10152e734(void)

{
  return 0;
}



/* Entry: 10152e73c; end: 10152e7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152e73c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db24c8);
  *(undefined8 *)(unaff_x20 + _DAT_112db1348) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db1350) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152e7d8; end: 10152e837; -[_TtC27UserSessionScopeGraphBridge33SCComposerServicesSaberEntryPoint init] */

void FUN_10152e7d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.SCComposerServicesSaberEntryPoint",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152e804);
  (*pcVar1)();
}



/* Entry: 10152e838; end: 10152e8cb; -[_TtC27UserSessionScopeGraphBridge33SCComposerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152e838(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db1348));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db1350));
  return;
}



/* Entry: 10152e8cc; end: 10152e8d3;  */

undefined8 FUN_10152e8cc(void)

{
  return 0;
}



/* Entry: 10152e8d4; end: 10152e96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152e8d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db2578);
  *(undefined8 *)(unaff_x20 + _DAT_112db1380) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db1388) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152e970; end: 10152e9cf; -[_TtC27UserSessionScopeGraphBridge40SCStickerInjectorServicesSaberEntryPoint init] */

void FUN_10152e970(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.SCStickerInjectorServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152e99c);
  (*pcVar1)();
}



/* Entry: 10152e9d0; end: 10152ea63; -[_TtC27UserSessionScopeGraphBridge40SCStickerInjectorServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152e9d0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db1380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db1388));
  return;
}



/* Entry: 10152ea64; end: 10152ea6b;  */

undefined8 FUN_10152ea64(void)

{
  return 0;
}



/* Entry: 10152ea6c; end: 10152eb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152ea6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db2580);
  *(undefined8 *)(unaff_x20 + _DAT_112db13b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db13c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152eb08; end: 10152eb67; -[_TtC27UserSessionScopeGraphBridge31SCStreakServicesSaberEntryPoint init] */

void FUN_10152eb08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.SCStreakServicesSaberEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152eb34);
  (*pcVar1)();
}



/* Entry: 10152eb68; end: 10152ebfb; -[_TtC27UserSessionScopeGraphBridge31SCStreakServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152eb68(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db13b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db13c0));
  return;
}



/* Entry: 10152ebfc; end: 10152ec03;  */

undefined8 FUN_10152ebfc(void)

{
  return 0;
}



/* Entry: 10152ec04; end: 10152ec9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152ec04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db2590);
  *(undefined8 *)(unaff_x20 + _DAT_112db13f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db13f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152eca0; end: 10152ecff; -[_TtC27UserSessionScopeGraphBridge35SCUcoDefaultServicesSaberEntryPoint init] */

void FUN_10152eca0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.SCUcoDefaultServicesSaberEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152eccc);
  (*pcVar1)();
}



/* Entry: 10152ed00; end: 10152ed93; -[_TtC27UserSessionScopeGraphBridge35SCUcoDefaultServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ed00(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db13f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db13f8));
  return;
}



/* Entry: 10152ed94; end: 10152ed9b;  */

undefined8 FUN_10152ed94(void)

{
  return 0;
}



/* Entry: 10152ed9c; end: 10152ee37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152ed9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112db2598);
  *(undefined8 *)(unaff_x20 + _DAT_112db1428) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112db1430) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152ee38; end: 10152ee97; -[_TtC27UserSessionScopeGraphBridge28SCUcoServicesSaberEntryPoint init] */

void FUN_10152ee38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserSessionScopeGraphBridge.SCUcoServicesSaberEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152ee64);
  (*pcVar1)();
}



/* Entry: 10152ee98; end: 10152ef2b; -[_TtC27UserSessionScopeGraphBridge28SCUcoServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ee98(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112db1428));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db1430));
  return;
}



/* Entry: 10152ef2c; end: 10152ef33;  */

undefined8 FUN_10152ef2c(void)

{
  return 0;
}


