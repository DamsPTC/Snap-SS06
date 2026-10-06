/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c23890; end: 102c238af;  */

void FUN_102c23890(void)

{
  func_0x000107c61168(&PTR_PTR_112898098);
  return;
}



/* Entry: 102c238b0; end: 102c2392f;  */

undefined * FUN_102c238b0(undefined *param_1,undefined *param_2)

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
    func_0x000102c23744();
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



/* Entry: 102c23930; end: 102c23a53;  */

long FUN_102c23930(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c23a50);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c23a54);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f008f8;
        func_0x0001000285a8(0x112f008f8,&UNK_10db33d80);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f008f8;
      func_0x0001000285a8(0x112f008f8,&UNK_10db33d80);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c23a4c);
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



/* Entry: 102c23a54; end: 102c23a9f;  */

void FUN_102c23a54(undefined8 param_1)

{
  func_0x0001000285a8(0x112f00908,&UNK_10db33d90);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c23b0c,param_1);
  return;
}



/* Entry: 102c23aa0; end: 102c23b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23aa0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102c23be0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f00910) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102c23b0c; end: 102c23b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23b0c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102c23be0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f00910) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102c23b14; end: 102c23b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23b14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f00910) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c23b60; end: 102c23bbf; -[_TtC27SCOperaDebugServiceProvider27SCOperaDebugServicesWrapper init] */

void FUN_102c23b60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaDebugServiceProvider.SCOperaDebugServicesWrapper",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c23b8c);
  (*pcVar1)();
}



/* Entry: 102c23bc0; end: 102c23bcf;  */

undefined1  [16] FUN_102c23bc0(void)

{
  return ZEXT816(0x1105b3b60);
}



/* Entry: 102c23bd0; end: 102c23bdf; -[_TtC27SCOperaDebugServiceProvider27SCOperaDebugServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00910));
  return;
}



/* Entry: 102c23be0; end: 102c23bff;  */

void FUN_102c23be0(void)

{
  func_0x000107c61168(&PTR_PTR_112898158);
  return;
}



/* Entry: 102c23c00; end: 102c23c3f;  */

void FUN_102c23c00(void)

{
  func_0x0001000285a8(0x112f00940,&UNK_10db33e10);
  func_0x0001000823a8(FUN_102c23c40,0);
  return;
}



/* Entry: 102c23c40; end: 102c23c57;  */

void FUN_102c23c40(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 102c23c58; end: 102c23ca3; -[SCWDescriptiveRevealScope mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23c58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f00948);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f00948))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c23ca4; end: 102c23cc3; -[SCWDescriptiveRevealScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23ca4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f00950));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c23cc4; end: 102c23ce3; -[SCWDescriptiveRevealScope revealHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23cc4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f00958));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c23ce4; end: 102c23cff; -[SCWDescriptiveRevealScope onRevealConfirmed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23ce4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112f00960);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112f00960))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100c75f50;
    puStack_48 = &UNK_1105b3d08;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102c23d00; end: 102c23d0f; -[SCWDescriptiveRevealScope reportContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00968));
  return;
}



/* Entry: 102c23d10; end: 102c23d2f; -[SCWDescriptiveRevealScope reportLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23d10(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f00970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c23d30; end: 102c23d4b; -[SCWDescriptiveRevealScope onReportRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23d30(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112f00978);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112f00978))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105b3ce0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102c23d4c; end: 102c23dd3;  */

void FUN_102c23d4c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = param_4;
    uStack_48 = param_5;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102c23dd4; end: 102c23e63; -[SCWDescriptiveRevealScope onFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23dd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00980);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105b3cb8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102c23e64; end: 102c24073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00948);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f00950) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f00958) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00960);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f00968) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f00970) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00978);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00980);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c24074; end: 102c2423f; -[SCWDescriptiveRevealScope initWithMediaId:uiContainer:revealHandler:onRevealConfirmed:reportContext:reportLauncher:onReportRequested:onFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c24074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec();
  if (param_6 == 0) {
    pcVar5 = (code *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &UNK_1105b3ca0;
    func_0x000107c613fc(&UNK_1105b3ca0,0x18,7);
    *(long *)(puVar7 + 0x10) = param_6;
    pcVar5 = FUN_102c24348;
  }
  if (param_9 == 0) {
    puVar4 = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    puVar4 = &UNK_1105b3c78;
    func_0x000107c613fc(&UNK_1105b3c78,0x18,7);
    *(long *)(puVar4 + 0x10) = param_9;
    uVar6 = 0x102c243ac;
  }
  puVar3 = &UNK_1105b3c50;
  func_0x000107c613fc(&UNK_1105b3c50,0x18,7);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00948);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f00950) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f00958) = param_5;
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00960);
  *puVar1 = pcVar5;
  puVar1[1] = puVar7;
  *(undefined8 *)(param_1 + _DAT_112f00968) = param_7;
  *(undefined8 *)(param_1 + _DAT_112f00970) = param_8;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00978);
  *puVar1 = uVar6;
  puVar1[1] = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00980);
  *puVar1 = FUN_102c2433c;
  puVar1[1] = puVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61154(&lStack_70,puVar7);
  return;
}



/* Entry: 102c24240; end: 102c24273;  */

void FUN_102c24240(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c24274; end: 102c2431b; -[SCWDescriptiveRevealScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c24274(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f00948 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f00950));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f00958));
  func_0x000100d1fa00(*(undefined8 *)(param_1 + _DAT_112f00960),
                      ((undefined8 *)(param_1 + _DAT_112f00960))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f00968));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f00970));
  func_0x000100d1fa00(*(undefined8 *)(param_1 + _DAT_112f00978),
                      ((undefined8 *)(param_1 + _DAT_112f00978))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00980 + 8));
  return;
}



/* Entry: 102c2431c; end: 102c2433b;  */

void FUN_102c2431c(void)

{
  func_0x000107c61168(&PTR_PTR_112898218);
  return;
}



/* Entry: 102c2433c; end: 102c24347;  */

void FUN_102c2433c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102c24344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102c24348; end: 102c2437f;  */

void FUN_102c24348(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c24380; end: 102c243af;  */

void FUN_102c24380(long param_1,long param_2)

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



/* Entry: 102c243b0; end: 102c24427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c243b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f009c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f009c0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (**(code **)(unaff_x20 + _DAT_112f009c8))(((undefined8 *)(unaff_x20 + _DAT_112f009c8))[1]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102c24428; end: 102c24447;  */

void FUN_102c24428(void)

{
  func_0x000107c61168(&PTR_PTR_112f00a38);
  return;
}



/* Entry: 102c24448; end: 102c244c3;  */

undefined * FUN_102c24448(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar1 = uStack_28;
  func_0x00010017da58(uStack_28);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 102c244c4; end: 102c2508b;  */

/* WARNING: Possible PIC construction at 0x000102c245a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c247a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c248a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c249c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c24d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c25058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c25040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c248fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2490c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2506c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c24910) */
/* WARNING: Removing unreachable block (ram,0x000102c24900) */
/* WARNING: Removing unreachable block (ram,0x000102c25044) */
/* WARNING: Removing unreachable block (ram,0x000102c2505c) */
/* WARNING: Removing unreachable block (ram,0x000102c24d70) */
/* WARNING: Removing unreachable block (ram,0x000102c24fa4) */
/* WARNING: Removing unreachable block (ram,0x000102c24d9c) */
/* WARNING: Removing unreachable block (ram,0x000102c24d40) */
/* WARNING: Removing unreachable block (ram,0x000102c24d88) */
/* WARNING: Removing unreachable block (ram,0x000102c24be8) */
/* WARNING: Removing unreachable block (ram,0x000102c24d4c) */
/* WARNING: Removing unreachable block (ram,0x000102c24bf8) */
/* WARNING: Removing unreachable block (ram,0x000102c24bc8) */
/* WARNING: Removing unreachable block (ram,0x000102c25054) */
/* WARNING: Removing unreachable block (ram,0x000102c24bcc) */
/* WARNING: Removing unreachable block (ram,0x000102c24b40) */
/* WARNING: Removing unreachable block (ram,0x000102c24ae0) */
/* WARNING: Removing unreachable block (ram,0x000102c249cc) */
/* WARNING: Removing unreachable block (ram,0x000102c2503c) */
/* WARNING: Removing unreachable block (ram,0x000102c249d0) */
/* WARNING: Removing unreachable block (ram,0x000102c24aec) */
/* WARNING: Removing unreachable block (ram,0x000102c24b30) */
/* WARNING: Removing unreachable block (ram,0x000102c24a00) */
/* WARNING: Removing unreachable block (ram,0x000102c248ac) */
/* WARNING: Removing unreachable block (ram,0x000102c24928) */
/* WARNING: Removing unreachable block (ram,0x000102c2487c) */
/* WARNING: Removing unreachable block (ram,0x000102c2486c) */
/* WARNING: Removing unreachable block (ram,0x000102c247a4) */
/* WARNING: Removing unreachable block (ram,0x000102c248b0) */
/* WARNING: Removing unreachable block (ram,0x000102c247a8) */
/* WARNING: Removing unreachable block (ram,0x000102c24784) */
/* WARNING: Removing unreachable block (ram,0x000102c25068) */
/* WARNING: Removing unreachable block (ram,0x000102c24788) */
/* WARNING: Removing unreachable block (ram,0x000102c245a8) */
/* WARNING: Removing unreachable block (ram,0x000102c245d0) */
/* WARNING: Removing unreachable block (ram,0x000102c2492c) */
/* WARNING: Removing unreachable block (ram,0x000102c246e0) */
/* WARNING: Removing unreachable block (ram,0x000102c245ac) */
/* WARNING: Removing unreachable block (ram,0x000102c25070) */

void FUN_102c244c4(void)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  FUN_102c243b0();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102c2508c; end: 102c2513b;  */

void FUN_102c2508c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,1,0);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61428(param_5 + 0x10,auStack_80,1,0);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c60f3c(param_6);
  return;
}



/* Entry: 102c2513c; end: 102c251a3;  */

void FUN_102c2513c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 102c251a4; end: 102c25bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c251a4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,byte param_11,undefined4 param_12,long param_13,long param_14,
                  undefined8 param_15)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + _DAT_112f009b0) != param_2) {
LAB_102c25250:
    func_0x000107c61170();
    return;
  }
  lVar1 = param_1;
  FUN_102c243b0();
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    goto LAB_102c25250;
  }
  puVar3 = &UNK_1105b3ee0;
  func_0x000107c613fc(&UNK_1105b3ee0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_1105b4098;
  func_0x000107c613fc(&UNK_1105b4098,0x80,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long *)(puVar4 + 0x18) = param_3;
  *(long *)(puVar4 + 0x20) = param_2;
  *(long *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  *(undefined8 *)(puVar4 + 0x38) = param_6;
  *(undefined8 *)(puVar4 + 0x40) = param_7;
  *(undefined8 *)(puVar4 + 0x48) = param_8;
  *(undefined8 *)(puVar4 + 0x50) = param_9;
  *(undefined8 *)(puVar4 + 0x58) = param_10;
  puVar4[0x60] = param_11 & 1;
  *(long *)(puVar4 + 0x68) = param_13;
  *(long *)(puVar4 + 0x70) = param_14;
  *(undefined8 *)(puVar4 + 0x78) = param_15;
  func_0x000107c61428(param_4 + 0x10,auStack_98,0,0);
  pcVar16 = *(code **)(param_4 + 0x10);
  if (pcVar16 == (code *)0x0) {
    func_0x000107c6157c(puVar3);
    func_0x000107c615f0(param_15);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(param_13);
    func_0x000107c61434(param_10);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_3);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + _DAT_112f009b8 + 0x18);
    func_0x0001000a8868(param_1 + _DAT_112f009b8,uVar14);
    func_0x000107c6157c(puVar3);
    func_0x000107c615f0(param_15);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(param_13);
    func_0x000107c61434(param_10);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_3);
    func_0x000107c61174();
    pcVar5 = pcVar16;
    FUN_102c261fc();
    if (pcVar5 != (code *)0x0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1105b40c0;
      func_0x000107c613fc(&UNK_1105b40c0,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_102c26794;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      func_0x000107c6157c(puVar4);
      (*pcVar5)(pcVar16,param_15,FUN_102c267f0,puVar3);
      func_0x000107c61574(puVar3);
      FUN_102c26810(pcVar5,uVar14);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar4);
      goto LAB_102c25250;
    }
    func_0x000107c61170(pcVar16);
  }
  func_0x000107c61428(puVar3 + 0x10,auStack_b0,0,0);
  puVar6 = puVar3 + 0x10;
  func_0x000107c61618();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61574(puVar3);
    goto LAB_102c25818;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_c8,0,0);
  if ((*(char *)(param_3 + 0x18) == '\x01') || (*(long *)(puVar6 + _DAT_112f009b0) != param_2)) {
    func_0x000107c61574(puVar3);
  }
  else {
    func_0x000107c61428(param_4 + 0x10,auStack_e0,0,0);
    lVar17 = *(long *)(param_4 + 0x10);
    func_0x000107c61428(param_13 + 0x10,auStack_f8,0,0);
    uVar14 = *(undefined8 *)(param_13 + 0x10);
    lVar1 = *(long *)(param_13 + 0x18);
    func_0x000107c61428(param_14 + 0x10,auStack_110,0,0);
    uVar7 = *(undefined8 *)(param_14 + 0x10);
    func_0x000107c61174();
    lVar2 = lVar17;
    func_0x000107c61174();
    lVar15 = lVar1;
    func_0x000107c61434();
    FUN_102c243b0();
    lVar8 = lVar15;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    if (lVar8 != 0) {
      lVar15 = lVar8;
      func_0x000107c5d17c(lVar8);
      func_0x000107c61180();
      func_0x000107c41864();
      func_0x000107c615e8(lVar15);
      uVar9 = *(undefined8 *)(puVar6 + _DAT_112f009c0);
      func_0x000107c61174(uVar9);
      uVar10 = uVar9;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(uVar10);
    }
    puVar11 = PTR_PTR_1126b2e90;
    func_0x000107c610f8(PTR_PTR_1126b2e90);
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5fadc(param_9,param_10);
    func_0x000107c46170(puVar11);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_9);
    if (lVar17 == 0) {
LAB_102c256ac:
      lVar15 = 0;
    }
    else {
      lVar15 = lVar2;
      func_0x000107c5db08();
      func_0x000107c61180();
      if (lVar15 == 0) goto LAB_102c256ac;
    }
    func_0x000107c57da0(puVar11);
    func_0x000107c61170(lVar15);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c556a0(puVar11);
    func_0x000107c61170(puVar13);
    if (lVar1 == 0) {
      uVar14 = 0;
    }
    else {
      func_0x000107c5fadc(uVar14,lVar1);
    }
    func_0x000107c54f50(puVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c53984(puVar11);
    puVar13 = PTR_PTR_1126b2e98;
    func_0x000107c61168(PTR_PTR_1126b2e98);
    func_0x000107c3f8c4();
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126b2ec8;
    func_0x000107c610f8(PTR_PTR_1126b2ec8);
    func_0x000107c4904c();
    func_0x000107c61170(puVar13);
    puVar13 = *(undefined **)(puVar6 + _DAT_112f009c0);
    func_0x000107c61174(puVar13);
    func_0x000107c42c1c();
    func_0x000107c61574(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(lVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
    puVar6 = puVar13;
  }
  func_0x000107c61170(puVar6);
LAB_102c25818:
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102c25bbc; end: 102c25c97; -[_TtC23SCWChatMessageReporting28SCWChatMessageReportLauncher launchReportForMessageId:conversationId:reportedUserId:isGroupConversation:uiContainer:] */

/* WARNING: Possible PIC construction at 0x000102c25c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c25c70) */

void FUN_102c25bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_102c244c4(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c25c98; end: 102c25cf7; -[_TtC23SCWChatMessageReporting28SCWChatMessageReportLauncher init] */

void FUN_102c25c98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWChatMessageReporting.SCWChatMessageReportLauncher",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c25cc4);
  (*pcVar1)();
}



/* Entry: 102c25cf8; end: 102c25d43; -[_TtC23SCWChatMessageReporting28SCWChatMessageReportLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c25cf8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f009b8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f009c8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f009c0));
  return;
}



/* Entry: 102c25d44; end: 102c25d6b; -[_TtC23SCWChatMessageReporting28SCWChatMessageReportLauncher reportDidCompleteWithCancelled:] */

void FUN_102c25d44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c26670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c25d6c; end: 102c25d93; -[_TtC23SCWChatMessageReporting28SCWChatMessageReportLauncher dismissReport] */

void FUN_102c25d6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c26670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c25d94; end: 102c260b7;  */

void FUN_102c25d94(undefined8 param_1,undefined8 param_2,byte *param_3,ulong param_4,code *param_5)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte **ppbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbStack_50;
  ulong uStack_48;
  
  if (param_4 != 0) {
    uVar5 = (ulong)param_3 & 0xffffffffffff;
    uVar7 = param_4 >> 0x38 & 0xf;
    uVar4 = uVar5;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar4 = uVar7;
    }
    if (uVar4 != 0) {
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            func_0x000107c60358();
          }
          else {
            param_3 = (byte *)((param_4 & 0xfffffffffffffff) + 0x20);
            param_4 = uVar5;
          }
          if (*param_3 == 0x2b) {
            if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102c260b4);
              (*pcVar2)();
            }
            lVar9 = param_4 - 1;
            if (lVar9 != 0) {
              pbVar3 = (byte *)0x0;
              do {
                param_3 = param_3 + 1;
                if (((9 < *param_3 - 0x30) ||
                    (lVar8 = (long)pbVar3 * 10,
                    SUB168(SEXT816((long)pbVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                   (uVar4 = (ulong)(byte)(*param_3 - 0x30), pbVar3 = (byte *)(lVar8 + uVar4),
                   SCARRY8(lVar8,uVar4))) goto LAB_102c25fb8;
                uVar4 = 0;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
              goto LAB_102c26024;
            }
          }
          else if (*param_3 == 0x2d) {
            if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102c260ac);
              (*pcVar2)();
            }
            lVar9 = param_4 - 1;
            if (lVar9 != 0) {
              pbVar3 = (byte *)0x0;
              do {
                param_3 = param_3 + 1;
                if (((9 < *param_3 - 0x30) ||
                    (lVar8 = (long)pbVar3 * 10,
                    SUB168(SEXT816((long)pbVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                   (uVar4 = (ulong)(byte)(*param_3 - 0x30), pbVar3 = (byte *)(lVar8 - uVar4),
                   SBORROW8(lVar8,uVar4))) goto LAB_102c25fb8;
                uVar4 = 0;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
              goto LAB_102c26024;
            }
          }
          else if (param_4 != 0) {
            pbVar3 = (byte *)0x0;
            if (param_3 == (byte *)0x0) {
              uVar4 = 0;
            }
            else {
              do {
                if (((9 < *param_3 - 0x30) ||
                    (lVar9 = (long)pbVar3 * 10,
                    SUB168(SEXT816((long)pbVar3) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                   (uVar4 = (ulong)(byte)(*param_3 - 0x30), pbVar3 = (byte *)(lVar9 + uVar4),
                   SCARRY8(lVar9,uVar4))) goto LAB_102c25fb8;
                uVar4 = 0;
                param_4 = param_4 - 1;
                param_3 = param_3 + 1;
              } while (param_4 != 0);
            }
            goto LAB_102c26024;
          }
          goto LAB_102c25fb8;
        }
        pbStack_50 = param_3;
        uStack_48 = param_4 & 0xffffffffffffff;
        uVar1 = (uint)param_3 & 0xff;
        if (uVar1 == 0x2b) {
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c260b8);
            (*pcVar2)();
          }
          lVar9 = uVar7 - 1;
          if (lVar9 == 0) goto LAB_102c26010;
          param_3 = (byte *)0x0;
          pbVar3 = (byte *)((ulong)&pbStack_50 | 1);
          do {
            if (((9 < *pbVar3 - 0x30) ||
                (lVar8 = (long)param_3 * 10,
                SUB168(SEXT816((long)param_3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
               (uVar4 = (ulong)(byte)(*pbVar3 - 0x30), param_3 = (byte *)(lVar8 + uVar4),
               SCARRY8(lVar8,uVar4))) goto LAB_102c26010;
            uVar4 = 0;
            lVar9 = lVar9 + -1;
            pbVar3 = pbVar3 + 1;
          } while (lVar9 != 0);
        }
        else if (uVar1 == 0x2d) {
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c260b0);
            (*pcVar2)();
          }
          lVar9 = uVar7 - 1;
          if (lVar9 == 0) {
LAB_102c26010:
            param_3 = (byte *)0x0;
            uVar4 = 1;
          }
          else {
            param_3 = (byte *)0x0;
            pbVar3 = (byte *)((ulong)&pbStack_50 | 1);
            do {
              if (((9 < *pbVar3 - 0x30) ||
                  (lVar8 = (long)param_3 * 10,
                  SUB168(SEXT816((long)param_3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                 (uVar4 = (ulong)(byte)(*pbVar3 - 0x30), param_3 = (byte *)(lVar8 - uVar4),
                 SBORROW8(lVar8,uVar4))) goto LAB_102c26010;
              uVar4 = 0;
              lVar9 = lVar9 + -1;
              pbVar3 = pbVar3 + 1;
            } while (lVar9 != 0);
          }
        }
        else {
          if (uVar7 == 0) goto LAB_102c26010;
          param_3 = (byte *)0x0;
          ppbVar6 = &pbStack_50;
          do {
            if (((9 < *(byte *)ppbVar6 - 0x30) ||
                (lVar9 = (long)param_3 * 10,
                SUB168(SEXT816((long)param_3) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar4 = (ulong)(byte)(*(byte *)ppbVar6 - 0x30), param_3 = (byte *)(lVar9 + uVar4),
               SCARRY8(lVar9,uVar4))) goto LAB_102c26010;
            uVar4 = 0;
            uVar7 = uVar7 - 1;
            ppbVar6 = (byte **)((long)ppbVar6 + 1);
          } while (uVar7 != 0);
        }
      }
      else {
        func_0x000107c61434(param_4);
        uVar4 = param_4;
        func_0x000100fb6b80(param_3,param_4,10);
        func_0x000107c6142c(param_4);
      }
      pbVar3 = (byte *)0x0;
      if (((uint)uVar4 & 0xff) != 1) {
        pbVar3 = param_3;
      }
      goto LAB_102c26024;
    }
  }
LAB_102c25fb8:
  uVar4 = 1;
  pbVar3 = (byte *)0x0;
LAB_102c26024:
  (*param_5)(pbVar3,uVar4);
  return;
}



/* Entry: 102c260b8; end: 102c2614f;  */

void FUN_102c260b8(ulong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c26150);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x00010103193c(0,param_1);
    }
  }
  (*param_3)(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102c26150; end: 102c261fb;  */

void FUN_102c26150(long param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
    pcVar2 = (code *)0x0;
  }
  else {
    lVar1 = param_1;
    pcVar2 = param_2;
    func_0x000107c44520();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar3 = 0;
      pcVar2 = (code *)0x0;
    }
    else {
      lVar3 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c406d4(param_1);
    func_0x000107c61180();
  }
  (*param_2)(lVar3,pcVar2,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar2);
  return;
}



/* Entry: 102c261fc; end: 102c262ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102c261fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  lVar1 = 0;
  FUN_102c28404();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f00be0) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_112f00be8) = uStack_40;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  puVar4 = &UNK_1105b40e8;
  func_0x000107c613fc(&UNK_1105b40e8,0x18,7);
  *(long **)(puVar4 + 0x10) = plVar3;
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = 0x102c26820;
  return auVar5;
}



/* Entry: 102c262ac; end: 102c2642b;  */

/* WARNING: Possible PIC construction at 0x000102c263b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c263d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c263b4) */
/* WARNING: Removing unreachable block (ram,0x000102c263d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c262ac(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_1105b4110;
  func_0x000107c613fc(&UNK_1105b4110,0x20,7);
  *(code **)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  lVar4 = *(long *)(param_5 + _DAT_112f00be8);
  func_0x000107c6157c(param_4);
  func_0x000107c5b4a8();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
    (*param_3)(1);
  }
  else {
    puVar3 = &UNK_1105b4138;
    func_0x000107c613fc(&UNK_1105b4138,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_102c26828;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    pcStack_60 = FUN_102c2684c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ab47f8;
    puStack_68 = &UNK_1105b4150;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c(puVar1);
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c2642c; end: 102c26467;  */

void FUN_102c2642c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c26468; end: 102c26597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102c26468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  FUN_102c24428();
  ppuStack_58 = &PTR_DAT_1105b4060;
  lVar2 = lVar1;
  auStack_78[0] = param_1;
  lStack_60 = lVar1;
  FUN_102c26734();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_b0[2] = *puVar5;
  ppuStack_80 = &PTR_DAT_1105b4060;
  *(undefined8 *)(lVar3 + _DAT_112f009c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f009b0) = 0;
  lStack_88 = lVar1;
  FUN_102c26854(alStack_b0 + 2,lVar3 + _DAT_112f009b8);
  puVar5 = (undefined8 *)(lVar3 + _DAT_112f009c8);
  *puVar5 = param_2;
  puVar5[1] = param_3;
  plVar4 = alStack_b0;
  alStack_b0[0] = lVar3;
  alStack_b0[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(auStack_78);
  return plVar4;
}



/* Entry: 102c26598; end: 102c265ef;  */

void FUN_102c26598(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 102c265f0; end: 102c2661b;  */

void FUN_102c265f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c2661c; end: 102c2666f;  */

void FUN_102c2661c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 102c26670; end: 102c26733;  */

/* WARNING: Possible PIC construction at 0x000102c266d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c266dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c26670(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  *(long *)(unaff_x20 + _DAT_112f009b0) = *(long *)(unaff_x20 + _DAT_112f009b0) + 1;
  FUN_102c243b0();
  lVar1 = param_1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 != 0) {
    func_0x000107c5d17c(lVar1);
    func_0x000107c61180();
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c26734; end: 102c26753;  */

void FUN_102c26734(void)

{
  func_0x000107c61168(&PTR_PTR_112898310);
  return;
}



/* Entry: 102c26754; end: 102c26793;  */

void FUN_102c26754(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c26794; end: 102c2679f;  */

void FUN_102c26794(void)

{
  long unaff_x20;
  
  (*(code *)0x102c2582c)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102c267a0; end: 102c267ef;  */

void FUN_102c267a0(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102c267f0; end: 102c2680f;  */

void FUN_102c267f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c26810; end: 102c26827;  */

void FUN_102c26810(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c26828; end: 102c2684b;  */

void FUN_102c26828(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1);
  return;
}



/* Entry: 102c2684c; end: 102c26853;  */

void FUN_102c2684c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c26854; end: 102c26897;  */

long FUN_102c26854(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c26898; end: 102c268b7;  */

void FUN_102c26898(long param_1,long param_2)

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



/* Entry: 102c268b8; end: 102c268db;  */

void FUN_102c268b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c268dc; end: 102c26a57;  */

void FUN_102c268dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f00ab0,&UNK_10db33f30);
  puVar1 = &UNK_1105b4188;
  func_0x000107c613fc(&UNK_1105b4188,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102c26a58,puVar1);
  return;
}



/* Entry: 102c26a58; end: 102c26a67;  */

void FUN_102c26a58(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  FUN_102c24428();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  FUN_102c26468(lVar5,0x102c26a98,uVar7);
  lVar6 = lVar5;
  FUN_102c26a68();
  func_0x000107c613fc();
  *(long *)(lVar6 + 0x10) = lVar5;
  *param_1 = lVar6;
  return;
}



/* Entry: 102c26a68; end: 102c26a87;  */

void FUN_102c26a68(void)

{
  func_0x000107c61168(&PTR_PTR_112f00af8);
  return;
}



/* Entry: 102c26a88; end: 102c26a9f;  */

undefined1  [16] FUN_102c26a88(void)

{
  return ZEXT816(0x1105b41b0);
}



/* Entry: 102c26aa0; end: 102c26b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c26aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00b58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00b60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f00b68);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f00b70) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c26b4c; end: 102c26c17; -[SCWRevealReportContext initWithMessageId:conversationId:reportedUserId:isGroupConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c26b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00b58);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00b60);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f00b68);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  *(undefined1 *)(param_1 + _DAT_112f00b70) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c26c18; end: 102c26c43; -[SCWRevealReportContext init] */

void FUN_102c26c18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWChatMessageReporting.SCWRevealReportContext",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c26c44);
  (*pcVar1)();
}



/* Entry: 102c26c44; end: 102c26c47;  */

void FUN_102c26c44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c26c48; end: 102c26c9b; -[SCWRevealReportContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c26c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c26c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c26c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f00b58 + 8))
  ;
  return;
}



/* Entry: 102c26c9c; end: 102c26c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *** FUN_102c26c9c(undefined **param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_61;
  
  ppuVar3 = param_1;
  uVar9 = param_2;
  func_0x000107c40258();
  func_0x000107c61180();
  ppuVar4 = ppuVar3;
  func_0x000107c5faec();
  uVar10 = uVar9;
  func_0x000107c61170(ppuVar3);
  ppuVar3 = param_1;
  func_0x000107c40674();
  func_0x000107c61180();
  ppuVar5 = ppuVar3;
  func_0x000107c5faec();
  uVar11 = uVar10;
  func_0x000107c61170(ppuVar3);
  func_0x000107c4cde0();
  func_0x000107c61180();
  ppuVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170();
  uVar1 = (ulong)ppuVar4 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar1 = uVar9 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = (ulong)ppuVar5 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar1 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = (ulong)ppuVar3 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar1 = uVar11 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uStack_61 = 0;
        if (param_2 == 0) {
          uVar13 = 0;
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = &UNK_1105b43b0;
          func_0x000107c613fc(&UNK_1105b43b0,0x18,7);
          *(undefined1 **)(puVar12 + 0x10) = &uStack_61;
          puVar6 = &UNK_1105b43d8;
          func_0x000107c613fc(&UNK_1105b43d8,0x20,7);
          uVar13 = 0x102c27d2c;
          *(undefined8 *)(puVar6 + 0x10) = 0x102c27d2c;
          *(undefined **)(puVar6 + 0x18) = puVar12;
          pcStack_88 = FUN_102c27d3c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x102861a24;
          puStack_90 = &UNK_1105b43f0;
          param_1 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4();
          func_0x000107c61574(puStack_80);
          func_0x000107c4c6d0(param_2);
          func_0x000107c60bd0();
        }
        uVar2 = uStack_61;
        FUN_102c27c10();
        ppuVar7 = param_1;
        func_0x000107c610f8();
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b58) = ppuVar4;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b58))[1] = uVar9;
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b60) = ppuVar5;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b60))[1] = uVar10;
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b68) = ppuVar3;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b68))[1] = uVar11;
        *(undefined1 *)((long)ppuVar7 + _DAT_112f00b70) = uVar2;
        pppuVar8 = &ppuStack_78;
        ppuStack_78 = ppuVar7;
        ppuStack_70 = param_1;
        func_0x000107c61154(pppuVar8,PTR_s_init_1125d9248);
        func_0x000100d1fd20(uVar13,puVar12);
        return pppuVar8;
      }
    }
  }
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar9);
  return (undefined ***)0x0;
}



/* Entry: 102c26ca0; end: 102c26cff; +[SCWRevealReportContext contextFrom:conversationParticipants:] */

void FUN_102c26ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  FUN_102c27970(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c26d00; end: 102c273b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c26d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f00b78);
  puVar1 = &UNK_1105b41d0;
  func_0x000107c613fc(&UNK_1105b41d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105b41f8;
  func_0x000107c613fc(&UNK_1105b41f8,0x78,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_11;
  *(undefined8 *)(puVar2 + 0x48) = param_12;
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  *(undefined8 *)(puVar2 + 0x58) = param_8;
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  *(undefined8 *)(puVar2 + 0x68) = param_9;
  *(undefined8 *)(puVar2 + 0x70) = param_10;
  pcStack_70 = FUN_102c27bb8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105b4210;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_68;
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_2);
  func_0x000100d1fcd8(param_5,param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c61174(param_7);
  func_0x000100d1fcd8(param_9,param_10);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102c273b8; end: 102c2746b;  */

/* WARNING: Possible PIC construction at 0x000102c27448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2744c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c273b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f00b58);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112f00b58))[1]);
  func_0x000107c5fadc(*(undefined8 *)(param_2 + _DAT_112f00b60),
                      ((undefined8 *)(param_2 + _DAT_112f00b60))[1]);
  func_0x000107c5fadc(*(undefined8 *)(param_2 + _DAT_112f00b68),
                      ((undefined8 *)(param_2 + _DAT_112f00b68))[1]);
  func_0x000107c4ab74(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c2746c; end: 102c275d7;  */

void FUN_102c2746c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c5fadc();
  func_0x000107c4c4e8(param_3);
  func_0x000107c61170(uVar1);
  if (param_4 != (code *)0x0) {
    (*param_4)(param_1,param_2);
  }
  (*param_6)();
  return;
}



/* Entry: 102c275d8; end: 102c2765f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c275d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f00b80;
  lVar3 = unaff_x20 + _DAT_112f00b80;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
    lVar2 = _DAT_112f00b88;
    lVar3 = unaff_x20 + _DAT_112f00b88;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61604(unaff_x20 + lVar1,0);
      func_0x000107c61604(unaff_x20 + lVar2,0);
      func_0x000107c41864(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 102c27660; end: 102c27863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27660(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f00b80;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112f00b80;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61170();
      lVar2 = _DAT_112f00b88;
      lVar3 = param_1 + _DAT_112f00b88;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c61604(param_1 + lVar1,0);
        func_0x000107c61604(param_1 + lVar2,0);
        func_0x000107c41864(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar3);
        goto LAB_102c27718;
      }
    }
    func_0x000107c61170(param_1);
  }
LAB_102c27718:
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 102c27864; end: 102c278f3; -[SCWDescriptiveRevealCoordinator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27864(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f00b80,0);
  func_0x000107c61614(param_1 + _DAT_112f00b88,0);
  lVar1 = _DAT_112f00b78;
  puVar3 = &UNK_10db33fa0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c278f4; end: 102c27927;  */

void FUN_102c278f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c27928; end: 102c2796f; -[SCWDescriptiveRevealCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27928(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f00b80);
  func_0x000100e3b598(param_1 + _DAT_112f00b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f00b78));
  return;
}



/* Entry: 102c27970; end: 102c27bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *** FUN_102c27970(undefined **param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_61;
  
  ppuVar3 = param_1;
  uVar9 = param_2;
  func_0x000107c40258();
  func_0x000107c61180();
  ppuVar4 = ppuVar3;
  func_0x000107c5faec();
  uVar10 = uVar9;
  func_0x000107c61170(ppuVar3);
  ppuVar3 = param_1;
  func_0x000107c40674();
  func_0x000107c61180();
  ppuVar5 = ppuVar3;
  func_0x000107c5faec();
  uVar11 = uVar10;
  func_0x000107c61170(ppuVar3);
  func_0x000107c4cde0();
  func_0x000107c61180();
  ppuVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170();
  uVar1 = (ulong)ppuVar4 & 0xffffffffffff;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar1 = uVar9 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = (ulong)ppuVar5 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar1 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = (ulong)ppuVar3 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar1 = uVar11 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uStack_61 = 0;
        if (param_2 == 0) {
          uVar13 = 0;
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = &UNK_1105b43b0;
          func_0x000107c613fc(&UNK_1105b43b0,0x18,7);
          *(undefined1 **)(puVar12 + 0x10) = &uStack_61;
          puVar6 = &UNK_1105b43d8;
          func_0x000107c613fc(&UNK_1105b43d8,0x20,7);
          uVar13 = 0x102c27d2c;
          *(undefined8 *)(puVar6 + 0x10) = 0x102c27d2c;
          *(undefined **)(puVar6 + 0x18) = puVar12;
          pcStack_88 = FUN_102c27d3c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x102861a24;
          puStack_90 = &UNK_1105b43f0;
          param_1 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4();
          func_0x000107c61574(puStack_80);
          func_0x000107c4c6d0(param_2);
          func_0x000107c60bd0();
        }
        uVar2 = uStack_61;
        FUN_102c27c10();
        ppuVar7 = param_1;
        func_0x000107c610f8();
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b58) = ppuVar4;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b58))[1] = uVar9;
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b60) = ppuVar5;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b60))[1] = uVar10;
        *(undefined8 *)((long)ppuVar7 + _DAT_112f00b68) = ppuVar3;
        ((undefined8 *)((long)ppuVar7 + _DAT_112f00b68))[1] = uVar11;
        *(undefined1 *)((long)ppuVar7 + _DAT_112f00b70) = uVar2;
        pppuVar8 = &ppuStack_78;
        ppuStack_78 = ppuVar7;
        ppuStack_70 = param_1;
        func_0x000107c61154(pppuVar8,PTR_s_init_1125d9248);
        func_0x000100d1fd20(uVar13,puVar12);
        return pppuVar8;
      }
    }
  }
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar9);
  return (undefined ***)0x0;
}



/* Entry: 102c27bb8; end: 102c27bf3;  */

void FUN_102c27bb8(void)

{
  long unaff_x20;
  
  func_0x000102c26e98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102c27bf4; end: 102c27c0f;  */

void FUN_102c27bf4(long param_1,long param_2)

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



/* Entry: 102c27c10; end: 102c27c4f;  */

void FUN_102c27c10(void)

{
  func_0x000107c61168(&PTR_PTR_1128983e8);
  return;
}



/* Entry: 102c27c50; end: 102c27c7b;  */

void FUN_102c27c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  uVar4 = param_1;
  func_0x000107c5fadc();
  func_0x000107c4c4e8(uVar1);
  func_0x000107c61170(uVar4);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,param_2);
  }
  (*pcVar3)();
  return;
}



/* Entry: 102c27c7c; end: 102c27cb7;  */

void FUN_102c27c7c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c27cb8; end: 102c27cc7;  */

void FUN_102c27cb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  uVar4 = param_1;
  func_0x000107c5fadc();
  func_0x000107c4c4e8(uVar1);
  func_0x000107c61170(uVar4);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,param_2);
  }
  (*pcVar3)();
  return;
}



/* Entry: 102c27cc8; end: 102c27cff;  */

void FUN_102c27cc8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  (*pcVar1)();
  return;
}



/* Entry: 102c27d00; end: 102c27d1f;  */

void FUN_102c27d00(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c27d20; end: 102c27d3b;  */

/* WARNING: Possible PIC construction at 0x000102c27448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2744c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27d20(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112f00b58);
  func_0x000107c5fadc(uVar3,((undefined8 *)(lVar2 + _DAT_112f00b58))[1]);
  func_0x000107c5fadc(*(undefined8 *)(lVar2 + _DAT_112f00b60),
                      ((undefined8 *)(lVar2 + _DAT_112f00b60))[1]);
  func_0x000107c5fadc(*(undefined8 *)(lVar2 + _DAT_112f00b68),
                      ((undefined8 *)(lVar2 + _DAT_112f00b68))[1]);
  func_0x000107c4ab74(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102c27d3c; end: 102c27d5b;  */

void FUN_102c27d3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c27d5c; end: 102c27d73;  */

void FUN_102c27d5c(long param_1,long param_2)

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



/* Entry: 102c27d74; end: 102c27dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27d74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f00be0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f00be8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c27dd8; end: 102c27e4f; -[SCWUserBlocker initWithSnapchatterServices:snapchattersActionHandlerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c27dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f00be0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f00be8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102c27e50; end: 102c27f7b;  */

void FUN_102c27e50(ulong param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar4 = *(ulong *)(uVar5 + 0x10);
      }
      else {
        uVar4 = param_1;
        if (-1 < (long)param_1) {
          uVar4 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c27f7c);
            (*pcVar1)();
          }
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = 0;
          func_0x00010103193c(0,param_1);
        }
        puVar3 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        FUN_102c281a4(uVar2,puVar3,param_4,param_5,param_3);
        func_0x000107c61170(param_3);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(puVar3);
        return;
      }
    }
    func_0x000107c61170();
  }
  (*param_4)();
  return;
}



/* Entry: 102c27f7c; end: 102c28027; -[SCWUserBlocker blockUserWithUserId:presentingViewController:thenAlwaysReport:] */

void FUN_102c27f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_5);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c28430(param_3,param_2,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c28028; end: 102c28047;  */

void FUN_102c28028(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}


