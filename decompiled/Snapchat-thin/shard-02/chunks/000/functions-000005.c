/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101688f60; end: 101688fbf; -[_TtC30BitmojiComposerServiceProvider28BitmojiCreationServicePlugin init] */

void FUN_101688f60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiComposerServiceProvider.BitmojiCreationServicePlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101688f8c);
  (*pcVar1)();
}



/* Entry: 101688fc0; end: 101688fcf;  */

undefined1  [16] FUN_101688fc0(void)

{
  return ZEXT816(0x1103f2b10);
}



/* Entry: 101688fd0; end: 101688fdf; -[_TtC30BitmojiComposerServiceProvider28BitmojiCreationServicePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbe8a0));
  return;
}



/* Entry: 101688fe0; end: 101688fff;  */

void FUN_101688fe0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3dd8);
  return;
}



/* Entry: 101689000; end: 10168900f; -[_TtC23BitmojiComposerServices23BitmojiComposerServices bitmojiCreationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dbe8d0));
  return;
}



/* Entry: 101689010; end: 1016890a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689010(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbe8d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016890a8; end: 1016890db;  */

void FUN_1016890a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016890dc; end: 1016890eb; -[_TtC23BitmojiComposerServices23BitmojiComposerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016890dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbe8d0));
  return;
}



/* Entry: 1016890ec; end: 101689307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016890ec(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = *(long *)(lStack_68 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    func_0x000100083b20(&lStack_68);
    func_0x000100083b20(&uStack_70);
    uVar4 = uStack_70;
    func_0x000107c4aa14(uStack_70);
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    func_0x000100083b20(&uStack_78);
    uVar5 = uStack_78;
    func_0x000107c4fd04(uStack_78);
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&uStack_80);
    uVar6 = uStack_80;
    func_0x000107c3e474(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    puVar7 = PTR_PTR_1126a77d8;
    func_0x000107c610f8(PTR_PTR_1126a77d8);
    func_0x000107c453e4();
    func_0x000100083b20(&uStack_88);
    puVar8 = PTR_PTR_1126a77e0;
    func_0x000107c610f8();
    func_0x000107c47510();
    func_0x000107c615e8(uStack_88);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lStack_68);
    func_0x000107c615ec(lVar3,2);
    *param_1 = puVar8;
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000003f,0x800000010efb5180,
                      "BitmojiMetricsServicesImplementation/BitmojiMetricsServicesSaberServiceProvider.swift"
                      ,0x55,2,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101689308);
  (*pcVar1)();
}



/* Entry: 101689308; end: 10168931b;  */

void FUN_101689308(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = PTR_PTR_1126a77c8;
  func_0x000107c610f8(PTR_PTR_1126a77c8);
  func_0x000107c453e4();
  func_0x000100083b20(&uStack_50);
  puVar2 = PTR_PTR_1126a77d0;
  func_0x000107c610f8();
  func_0x000107c46bc8();
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 10168931c; end: 101689403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168931c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126a77c0;
    func_0x000107c610f8();
    func_0x000107c474f8();
    func_0x000107c615e8(lVar3);
    *param_1 = puVar4;
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000004d,0x800000010efb5130,
                      "BitmojiMetricsServicesImplementation/BitmojiMetricsServicesSaberServiceProvider.swift"
                      ,0x55,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101689404);
  (*pcVar1)();
}



/* Entry: 101689404; end: 10168942f;  */

void FUN_101689404(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101689430; end: 101689443;  */

void FUN_101689430(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = PTR_PTR_1126a77b0;
  func_0x000107c610f8(PTR_PTR_1126a77b0);
  func_0x000107c453e4();
  func_0x000100083b20(&uStack_50);
  puVar2 = PTR_PTR_1126a77b8;
  func_0x000107c610f8();
  func_0x000107c46bc8();
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 101689444; end: 1016894eb;  */

void FUN_101689444(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = *param_2;
  func_0x000107c610f8(uVar1);
  func_0x000107c453e4();
  func_0x000100083b20(&uStack_50);
  uVar2 = *param_3;
  func_0x000107c610f8();
  func_0x000107c46bc8();
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = uVar2;
  return;
}



/* Entry: 1016894ec; end: 10168955b;  */

undefined1  [16] FUN_1016894ec(void)

{
  return ZEXT816(0x1103f2cd0);
}



/* Entry: 10168955c; end: 1016896b3;  */

void FUN_10168955c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1016896b4; end: 1016896e7;  */

void FUN_1016896b4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016896e8; end: 10168971f;  */

bool FUN_1016896e8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101689720; end: 10168976f;  */

void FUN_101689720(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dbe9f0 != 0) {
    return;
  }
  puVar1 = &UNK_1103f2ff0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dbe9f0 = param_1;
  return;
}



/* Entry: 101689770; end: 101689787;  */

undefined * FUN_101689770(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61574();
    func_0x000107c4a564();
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c4a8a4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101689788; end: 1016898a3;  */

void FUN_101689788(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar1 = param_2;
    func_0x000107c61434(param_1);
    func_0x000100121450(param_2);
    if ((uVar1 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + param_2 * 0x20,&uStack_50);
      func_0x000107c6142c(param_1);
      goto LAB_1016897f4;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_1016897f4:
  func_0x000100087f6c(&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1016898a4; end: 1016898c3;  */

void FUN_1016898a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar2 = uVar1;
    func_0x000107c61434(param_1,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000100121450(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar1 * 0x20,&uStack_50);
      func_0x000107c6142c(param_1);
      goto LAB_1016897f4;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_1016897f4:
  func_0x000100087f6c(&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1016898c4; end: 10168991f;  */

/* WARNING: Possible PIC construction at 0x0001016898d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016898dc) */

void FUN_1016898c4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101689920; end: 10168997b;  */

undefined8 * FUN_101689920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10168997c; end: 1016899b7;  */

undefined8 * FUN_10168997c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016899b8; end: 101689a53;  */

int FUN_1016899b8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101689a54; end: 101689a87;  */

undefined8 * FUN_101689a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101689a88; end: 101689adb;  */

undefined8 * FUN_101689a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101689adc; end: 101689b17;  */

undefined8 * FUN_101689adc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101689b18; end: 101689bbf;  */

int FUN_101689b18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101689bc0; end: 101689c0b;  */

void FUN_101689bc0(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101689c78,param_1);
  return;
}



/* Entry: 101689c0c; end: 101689c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689c0c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101689dbc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dbea00) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101689c78; end: 101689c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689c78(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101689dbc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dbea00) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101689c80; end: 101689ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689c80(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbea00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101689ccc; end: 101689d3b; -[_TtC37CustomojiSearchServicesImplementation29CustomojiSearchEngineDiPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101689ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c2bc70(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 101689d3c; end: 101689d9b; -[_TtC37CustomojiSearchServicesImplementation29CustomojiSearchEngineDiPlugin init] */

void FUN_101689d3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomojiSearchServicesImplementation.CustomojiSearchEngineDiPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101689d68);
  (*pcVar1)();
}



/* Entry: 101689d9c; end: 101689dab;  */

undefined1  [16] FUN_101689d9c(void)

{
  return ZEXT816(0x1103f3238);
}



/* Entry: 101689dac; end: 101689dbb; -[_TtC37CustomojiSearchServicesImplementation29CustomojiSearchEngineDiPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbea00));
  return;
}



/* Entry: 101689dbc; end: 101689ddb;  */

void FUN_101689dbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3f58);
  return;
}



/* Entry: 101689ddc; end: 101689e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101689ddc(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dbea58;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dbea58);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    FUN_101689e44();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174();
    func_0x00010168deb4(uVar4);
    lVar3 = param_1;
  }
  FUN_10168e214(lVar2);
  return lVar3;
}



/* Entry: 101689e44; end: 10168a227;  */

/* WARNING: Removing unreachable block (ram,0x000101689f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101689e44(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112dbea38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar12 = 0x800000010efb5280;
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efb5280);
  puVar4 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  uVar5 = uVar2;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar6);
      func_0x000107c610f8(PTR_PTR_1126b8468);
      func_0x00010006c00c(uVar7,uVar12);
      uVar6 = uVar7;
      FUN_10168db7c(uVar7,uVar12);
      func_0x00010006c090(uVar7,uVar12);
      if (uVar6 == 0) {
        func_0x000107c615e8(uVar2);
        func_0x00010006c090(uVar7,uVar12);
      }
      else {
        uVar8 = uVar6;
        func_0x000107c3f6e0();
        func_0x000107c61180();
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10168a228);
          (*pcVar1)();
        }
        uVar9 = uVar8;
        func_0x000107c40808();
        func_0x000107c61170(uVar8);
        if ((long)uVar9 < 1) {
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(uVar5);
          func_0x00010006c090(uVar7,uVar12);
          return;
        }
        uVar3 = 0xd000000000000019;
        func_0x000107c5fadc(0xd000000000000019,0x800000010efb52a0);
        uVar10 = 0;
        uVar13 = 0xe000000000000000;
        func_0x000107c5fadc(0);
        uVar8 = uVar2;
        func_0x000107c5c1dc();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar10);
        uVar9 = uVar13;
        uVar11 = uVar8;
        if (uVar8 == 0) {
          uVar11 = 0;
          func_0x000107c5faec();
          uVar9 = uVar13;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar13);
        }
        func_0x000107c5faec();
        uVar8 = uVar8 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar8 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar8 != 0) {
          uVar8 = uVar6;
          uVar13 = uVar9;
          func_0x000107c50110();
          func_0x000107c61180();
          if (uVar8 == 0) {
            uVar15 = 0;
            uVar13 = 0xe000000000000000;
          }
          else {
            uVar15 = uVar8;
            func_0x000107c5faec();
            func_0x000107c61170(uVar8);
          }
          uVar16 = *(ulong *)(unaff_x20 + _DAT_112dbea48);
          uVar14 = uVar13;
          func_0x000107c5fadc(uVar15);
          func_0x000107c440f8();
          func_0x000107c61180();
          func_0x000107c61170(uVar15);
          uVar8 = uVar16;
          func_0x000107c5faec();
          func_0x000107c61170(uVar16);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar14);
          uVar8 = uVar8 & 0xffffffffffff;
          if ((uVar14 & 0x2000000000000000) != 0) {
            uVar8 = uVar14 >> 0x38 & 0xf;
          }
          if (uVar8 == 0) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar11);
            func_0x00010006c090(uVar7,uVar12);
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(uVar6);
            return;
          }
          func_0x000107c525f0(uVar6);
          func_0x000107c61170(uVar11);
          func_0x00010006c090(uVar7,uVar12);
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(uVar5);
          return;
        }
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar9);
        func_0x000107c61170(uVar11);
        func_0x00010006c090(uVar7,uVar12);
        func_0x000107c615e8(uVar2);
      }
      func_0x000107c61170(uVar5);
      return;
    }
    func_0x000107c61170(uVar5);
  }
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10168a228; end: 10168a407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10168a228(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dbea60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dbea60);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    func_0x00010168a290();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61434();
    func_0x00010168dec4(uVar4);
    lVar3 = param_1;
  }
  FUN_10168e170(lVar2);
  return lVar3;
}



/* Entry: 10168a408; end: 10168a6af;  */

ulong FUN_10168a408(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar6 = param_1;
  FUN_10168a228();
  if (lVar6 == 0) {
    return 0;
  }
  uVar11 = *(ulong *)(lVar6 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar12 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168a6a0);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar12 * 0x10);
      uVar10 = puVar1[1];
      puVar13 = (undefined *)*puVar1;
      puStack_80 = puVar13;
      uStack_78 = uVar10;
      func_0x000107c61434(puVar13);
      func_0x000107c61434(puVar13,uVar10);
      func_0x000107c614bc(&lStack_68,&puStack_80,param_1);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(puVar13);
      lVar8 = lStack_68;
      uVar9 = *(ulong *)(lStack_68 + 0x10);
      lVar7 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168a6a4);
        (*pcVar2)();
      }
      puVar13 = puVar5;
      func_0x000107c61558();
      if (((int)puVar13 == 0) ||
         (uVar3 = *(ulong *)(puVar5 + 0x18) >> 1, (long)uVar3 < (long)(lVar7 + uVar9))) {
        FUN_10168d8ac();
        uVar3 = *(ulong *)(puVar13 + 0x18) >> 1;
        puVar5 = puVar13;
        if (*(long *)(lVar8 + 0x10) != 0) goto LAB_10168a528;
LAB_10168a454:
        func_0x000107c6142c(lVar8);
        puVar13 = puVar5;
        if (uVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10168a6a8);
          (*pcVar2)();
        }
      }
      else {
        puVar13 = puVar5;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_10168a454;
LAB_10168a528:
        if (uVar3 - *(long *)(puVar13 + 0x10) < uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10168a6ac);
          (*pcVar2)();
        }
        func_0x000107c6140c(puVar13 + *(long *)(puVar13 + 0x10) * 0x18 + 0x20,lVar8 + 0x20,uVar9,
                            &UNK_1103f3210);
        func_0x000107c6142c(lVar8);
        if (uVar9 != 0) {
          if (SCARRY8(*(long *)(puVar13 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10168a6b0);
            (*pcVar2)();
          }
          *(ulong *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + uVar9;
        }
      }
      uVar12 = uVar12 + 1;
      puVar5 = puVar13;
    } while (uVar11 != uVar12);
  }
  func_0x000107c6142c(lVar6);
  lVar6 = *(long *)(puVar13 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(puVar13);
    lVar6 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10168d76c(0,lVar6,0);
    lVar8 = 0x30;
    uVar11 = *(ulong *)(puStack_80 + 0x10);
    do {
      uVar10 = *(undefined8 *)(puVar13 + lVar8);
      uVar12 = uVar11 + 1;
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar11) {
        FUN_10168d76c(1 < *(ulong *)(puStack_80 + 0x18),uVar12,1);
      }
      puVar5 = puStack_80;
      *(ulong *)(puStack_80 + 0x10) = uVar12;
      *(undefined8 *)(puStack_80 + uVar11 * 8 + 0x20) = uVar10;
      lVar8 = lVar8 + 0x18;
      lVar6 = lVar6 + -1;
      uVar11 = uVar12;
    } while (lVar6 != 0);
    func_0x000107c6142c(puVar13);
    lVar6 = *(long *)(puVar5 + 0x10);
  }
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = *(ulong *)(puVar5 + 0x20);
    lVar6 = lVar6 + -1;
    uVar11 = uVar12;
    if (lVar6 != 0) {
      puVar4 = (ulong *)(puVar5 + 0x28);
      uVar9 = uVar12;
      do {
        uVar3 = *puVar4;
        uVar11 = uVar3;
        if (uVar3 <= uVar12) {
          uVar11 = uVar9;
        }
        if (uVar12 <= uVar3) {
          uVar12 = uVar3;
        }
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 1;
        uVar9 = uVar11;
      } while (lVar6 != 0);
    }
  }
  func_0x000107c6142c(puVar5);
  return uVar11;
}



/* Entry: 10168a6b0; end: 10168a77b;  */

undefined8 FUN_10168a6b0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_1);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000107c614e0();
    uVar2 = param_2;
    FUN_10168a408();
    func_0x000107c61574(param_2);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



/* Entry: 10168a77c; end: 10168a7db; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl init] */

void FUN_10168a77c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomojiSearchServicesImplementation.CustomojiSearchServiceImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10168a7a8);
  (*pcVar1)();
}



/* Entry: 10168a7dc; end: 10168a863; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168a7dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbea38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbea40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbea48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbea30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbea50));
  func_0x00010168deb4(*(undefined8 *)(param_1 + _DAT_112dbea58));
  if (*(long *)(param_1 + _DAT_112dbea60) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10168a864; end: 10168aceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168a864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbea30);
  puVar1 = &UNK_1103f3258;
  func_0x000107c613fc(&UNK_1103f3258,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103f3280;
  func_0x000107c613fc(&UNK_1103f3280,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  puVar2[0x30] = param_4;
  puVar2[0x31] = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  pcStack_70 = FUN_10168de10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103f3298;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10168acec; end: 10168adbb; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl searchCustomojiStickersWithText:maxResults:includeFriendmojis:skipDownload:completionBlock:] */

void FUN_10168acec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_1103f33c0;
  func_0x000107c613fc(&UNK_1103f33c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c61174(param_1);
  FUN_10168a864(param_3,param_2,param_4,param_5,param_6,0x10168deac,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10168adbc; end: 10168ae17;  */

void FUN_10168adbc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10168ae18; end: 10168af2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168ae18(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbea30);
  puVar1 = &UNK_1103f3258;
  func_0x000107c613fc(&UNK_1103f3258,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103f32d0;
  func_0x000107c613fc(&UNK_1103f32d0,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  uStack_60 = 0x10168de44;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103f32e8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10168af30; end: 10168afbf;  */

void FUN_10168af30(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10168afc0(param_2,param_3,param_4 & 1,param_5,param_6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10168afc0; end: 10168b2c7;  */

/* WARNING: Possible PIC construction at 0x00010168b03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168b264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010168b258) */
/* WARNING: Removing unreachable block (ram,0x00010168b23c) */
/* WARNING: Removing unreachable block (ram,0x00010168b19c) */
/* WARNING: Removing unreachable block (ram,0x00010168b144) */
/* WARNING: Removing unreachable block (ram,0x00010168b2a4) */
/* WARNING: Removing unreachable block (ram,0x00010168b148) */
/* WARNING: Removing unreachable block (ram,0x00010168b0ec) */
/* WARNING: Removing unreachable block (ram,0x00010168b268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168afc0(undefined *param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  if (param_2 != 0) {
    uVar3 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar3 != 0) && (puVar6 = param_1, FUN_101689ddc(), puVar6 != (undefined *)0x0)) {
      puVar2 = puVar6;
      FUN_10168a228();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c6142c();
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112dbea48);
        func_0x000107c4a658();
        if ((uVar3 & 1) == 0) {
          puVar2 = &DAT_112dbea68;
          FUN_10168a6b0(&DAT_112dbea68,&UNK_10d979f08);
          puVar4 = puVar2;
          if ((param_3 & 1) != 0) {
            puVar4 = &DAT_112dbea70;
            FUN_10168a6b0(&DAT_112dbea70,&UNK_10d979ee0);
            if (puVar4 <= puVar2) {
              puVar4 = puVar2;
            }
          }
          if (puVar4 != (undefined *)0x0) {
            func_0x000107c5fb5c(param_1,param_2);
            if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10168b2c8);
              (*pcVar1)();
            }
            if (param_1 <= puVar4) {
              puVar2 = puVar6;
              func_0x000107c3dabc();
              func_0x000107c61180();
              if (puVar2 != (undefined *)0x0) {
                func_0x000107c5faec();
                puVar6 = puVar2;
                goto code_r0x000107c61170;
              }
              lVar5 = *(long *)(unaff_x20 + _DAT_112dbea40);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar5 != 0) {
                puVar6 = (undefined *)0x0;
                func_0x000107c5fadc(0,0xe000000000000000);
                func_0x000107c49c54(lVar5);
                goto code_r0x000107c61170;
              }
              func_0x000107c6142c(0xe000000000000000);
            }
          }
          (*param_4)(0);
        }
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
  (*param_4)(0);
  return;
}



/* Entry: 10168b2c8; end: 10168b37b; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl hasResultsWithText:includeFriendmojis:completionBlock:] */

void FUN_10168b2c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_1103f3398;
  func_0x000107c613fc(&UNK_1103f3398,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_10168ae18(param_3,param_2,param_4,FUN_10168de98,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10168b37c; end: 10168b477;  */

void FUN_10168b37c(int param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c3ebcc();
    if (param_1 == 0) {
      uVar2 = 0;
      if (param_6 != 0) {
        uVar2 = param_5;
      }
      lVar1 = -0x2000000000000000;
      if (param_6 != 0) {
        lVar1 = param_6;
      }
      func_0x000107c61434(param_6);
      FUN_10168b478(uVar2,lVar1,param_7,param_8 & 1);
      func_0x000107c6142c(lVar1);
      (*param_3)(uVar2);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar2);
    }
    else {
      (*param_3)(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10168b478; end: 10168bf5f;  */

undefined * FUN_10168b478(undefined *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lStack_108;
  undefined *puStack_e8;
  long lStack_d8;
  undefined *puStack_c0;
  ulong uStack_b8;
  char cStack_a1;
  undefined *apuStack_a0 [2];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar11 = param_1;
  lVar19 = param_2;
  FUN_10168a228();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar11 != (undefined *)0x0) {
    puVar7 = puVar11;
    FUN_101689ddc();
    if (puVar7 != (undefined *)0x0) {
      puStack_80 = puVar10;
      uVar14 = *(ulong *)(puVar11 + 0x10);
      if (uVar14 == 0) {
        lStack_d8 = 0;
        lStack_108 = 0;
      }
      else {
        lStack_d8 = 0;
        lStack_108 = 0;
        uVar22 = 0;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if (*(ulong *)(puVar11 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf18);
            (*pcVar5)();
          }
          lVar25 = *(long *)(puVar11 + uVar22 * 0x10 + 0x20);
          lVar16 = *(long *)((long)(puVar11 + uVar22 * 0x10 + 0x20) + 8);
          uVar24 = *(ulong *)(lVar25 + 0x10);
          func_0x000107c61434(lVar25);
          func_0x000107c61434(lVar16);
          puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar24 != 0) {
            uVar15 = 0;
            do {
              puVar18 = (undefined8 *)(lVar25 + 0x30 + uVar15 * 0x18);
              uVar23 = uVar15;
              while( true ) {
                if (*(ulong *)(lVar25 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10168befc);
                  (*pcVar5)();
                }
                uVar27 = puVar18[-2];
                uVar3 = puVar18[-1];
                puVar20 = (undefined *)*puVar18;
                func_0x000107c61434(uVar3);
                puVar8 = param_1;
                lVar19 = param_2;
                func_0x000107c5fb5c();
                if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf00);
                  (*pcVar5)();
                }
                if (puVar8 <= puVar20) break;
                uVar23 = uVar23 + 1;
                func_0x000107c6142c(uVar3);
                puVar18 = puVar18 + 3;
                if (uVar24 == uVar23) goto LAB_10168b640;
              }
              puVar8 = puVar26;
              func_0x000107c61558();
              apuStack_a0[0] = puVar26;
              if (((ulong)puVar8 & 1) == 0) {
                lVar19 = *(long *)(puVar26 + 0x10) + 1;
                func_0x00010168d788(0,lVar19,1);
              }
              uVar2 = *(ulong *)(apuStack_a0[0] + 0x10);
              lVar1 = uVar2 + 1;
              if (*(ulong *)(apuStack_a0[0] + 0x18) >> 1 <= uVar2) {
                lVar19 = lVar1;
                func_0x00010168d788(1 < *(ulong *)(apuStack_a0[0] + 0x18),lVar1,1);
              }
              uVar15 = uVar23 + 1;
              *(long *)(apuStack_a0[0] + 0x10) = lVar1;
              *(undefined8 *)(apuStack_a0[0] + uVar2 * 0x18 + 0x20) = uVar27;
              *(undefined8 *)(apuStack_a0[0] + uVar2 * 0x18 + 0x28) = uVar3;
              *(undefined **)(apuStack_a0[0] + uVar2 * 0x18 + 0x30) = puVar20;
              puVar26 = apuStack_a0[0];
            } while (uVar24 - 1 != uVar23);
          }
LAB_10168b640:
          apuStack_a0[0] = puVar26;
          func_0x00010168d438();
          puVar26 = apuStack_a0[0];
          bVar6 = SCARRY8(lStack_d8,*(long *)(apuStack_a0[0] + 0x10));
          lStack_d8 = lStack_d8 + *(long *)(apuStack_a0[0] + 0x10);
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf28);
            (*pcVar5)();
          }
          if ((param_4 & 1) == 0) {
            func_0x000107c61434(apuStack_a0[0]);
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar25);
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            uVar24 = *(ulong *)(lVar16 + 0x10);
            func_0x000107c61434(apuStack_a0[0]);
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar24 != 0) {
              uVar15 = 0;
              do {
                puVar18 = (undefined8 *)(lVar16 + 0x30 + uVar15 * 0x18);
                uVar23 = uVar15;
                while( true ) {
                  if (*(ulong *)(lVar16 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf04);
                    (*pcVar5)();
                  }
                  uVar27 = puVar18[-2];
                  uVar3 = puVar18[-1];
                  puVar21 = (undefined *)*puVar18;
                  func_0x000107c61434(uVar3);
                  puVar20 = param_1;
                  lVar19 = param_2;
                  func_0x000107c5fb5c();
                  if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf08);
                    (*pcVar5)();
                  }
                  if (puVar20 <= puVar21) break;
                  uVar23 = uVar23 + 1;
                  func_0x000107c6142c(uVar3);
                  puVar18 = puVar18 + 3;
                  if (uVar24 == uVar23) goto LAB_10168b7a4;
                }
                puVar20 = puVar8;
                func_0x000107c61558();
                puStack_c0 = puVar8;
                if (((ulong)puVar20 & 1) == 0) {
                  lVar19 = *(long *)(puVar8 + 0x10) + 1;
                  func_0x00010168d788(0,lVar19,1);
                }
                uVar2 = *(ulong *)(puStack_c0 + 0x10);
                lVar1 = uVar2 + 1;
                if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar2) {
                  lVar19 = lVar1;
                  func_0x00010168d788(1 < *(ulong *)(puStack_c0 + 0x18),lVar1,1);
                }
                uVar15 = uVar23 + 1;
                *(long *)(puStack_c0 + 0x10) = lVar1;
                *(undefined8 *)(puStack_c0 + uVar2 * 0x18 + 0x20) = uVar27;
                *(undefined8 *)(puStack_c0 + uVar2 * 0x18 + 0x28) = uVar3;
                *(undefined **)(puStack_c0 + uVar2 * 0x18 + 0x30) = puVar21;
                puVar8 = puStack_c0;
              } while (uVar24 - 1 != uVar23);
            }
LAB_10168b7a4:
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar25);
            puStack_c0 = puVar8;
            func_0x00010168d438();
            bVar6 = SCARRY8(lStack_108,*(long *)(puStack_c0 + 0x10));
            lStack_108 = lStack_108 + *(long *)(puStack_c0 + 0x10);
            puVar8 = puStack_c0;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf2c);
              (*pcVar5)();
            }
          }
          func_0x000107c61434(puVar8);
          puVar20 = puVar10;
          func_0x000107c61558();
          puVar21 = puVar10;
          if (((ulong)puVar20 & 1) == 0) {
            lVar19 = *(long *)(puVar10 + 0x10) + 1;
            puVar21 = (undefined *)0x0;
            func_0x00010168cf00(0,lVar19,1,puVar10);
          }
          uVar24 = *(ulong *)(puVar21 + 0x10);
          lVar25 = uVar24 + 1;
          puVar10 = puVar21;
          if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar24) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
            lVar19 = lVar25;
            func_0x00010168cf00(puVar10,lVar25,1,puVar21);
          }
          uVar22 = uVar22 + 1;
          *(long *)(puVar10 + 0x10) = lVar25;
          *(undefined **)(puVar10 + uVar24 * 0x10 + 0x20) = puVar26;
          *(undefined **)(puVar10 + uVar24 * 0x10 + 0x28) = puVar8;
          func_0x000107c6142c(puVar8);
          func_0x000107c6142c(puVar26);
          puStack_80 = puVar10;
        } while (uVar22 != uVar14);
      }
      func_0x000107c6142c(puVar11);
      func_0x00010168d2d0();
      puVar10 = puVar7;
      func_0x000107c50110();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
        puStack_e8 = (undefined *)0x0;
        lVar19 = -0x2000000000000000;
      }
      else {
        puStack_e8 = puVar10;
        func_0x000107c5faec();
        func_0x000107c61170(puVar10);
      }
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((param_4 & 1) != 0) {
        lVar25 = 0;
        do {
          lVar16 = lVar25;
          lVar1 = lStack_108;
          if (param_3 / 2 <= lStack_108) {
            lVar1 = param_3 / 2;
          }
          while( true ) {
            puVar26 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            puVar10 = puVar26;
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar10 = puVar11;
            }
            uVar14 = (ulong)puVar11 >> 0x3e;
            do {
              if (uVar14 == 0) {
                puVar8 = *(undefined **)(puVar26 + 0x10);
              }
              else {
                puVar8 = puVar10;
                func_0x000107c60480();
              }
              if (lVar1 <= (long)puVar8) goto LAB_10168bba8;
              lVar17 = *(long *)(puStack_80 + 0x10);
              if (lVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf1c);
                (*pcVar5)();
              }
              lVar25 = lVar16 + 1;
              if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf20);
                (*pcVar5)();
              }
              lVar4 = 0;
              if (lVar17 != 0) {
                lVar4 = lVar16 / lVar17;
              }
              lVar17 = lVar16 - lVar4 * lVar17;
              if (lVar17 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf24);
                (*pcVar5)();
              }
              lVar16 = lVar16 + 1;
            } while (*(long *)(*(long *)(puStack_80 + lVar17 * 0x10 + 0x28) + 0x10) <= lVar4);
            if (lVar4 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf60);
              (*pcVar5)();
            }
            lVar16 = *(long *)(puStack_80 + lVar17 * 0x10 + 0x28) + lVar4 * 0x18;
            puVar8 = *(undefined **)(lVar16 + 0x20);
            uVar22 = *(ulong *)(lVar16 + 0x28);
            func_0x000107c61434(uVar22);
            puVar20 = puVar8;
            FUN_10168dee0(puVar8,uVar22,puVar11);
            if (((ulong)puVar20 & 1) != 0) break;
            puStack_90 = &uStack_88;
            uStack_88 = 0;
            if ((uVar22 >> 0x3c & 1) == 0) {
              if ((uVar22 >> 0x3d & 1) == 0) {
                if (((ulong)puVar8 >> 0x3c & 1) == 0) goto LAB_10168bb24;
                ppuVar9 = (undefined **)(uVar22 + 0x20);
                if (0x20 < *(byte *)ppuVar9 ||
                    (1L << ((ulong)*(byte *)ppuVar9 & 0x3f) & 0x100003e01U) == 0)
                goto LAB_10168bb08;
              }
              else {
                uStack_b8 = uVar22 & 0xffffffffffffff;
                puStack_c0 = puVar8;
                if (0x20 < ((uint)puVar8 & 0xff) ||
                    (1L << ((ulong)puVar8 & 0x3f) & 0x100003e01U) == 0) {
                  ppuVar9 = &puStack_c0;
LAB_10168bb08:
                  func_0x000107c60eb4(ppuVar9,&uStack_88);
                  if (ppuVar9 != (undefined **)0x0) {
                    cStack_a1 = *(byte *)ppuVar9 == 0;
                    goto LAB_10168ba30;
                  }
                }
              }
              cStack_a1 = '\0';
            }
            else {
LAB_10168bb24:
              func_0x000107c602f0(&cStack_a1,FUN_10168e2cc,apuStack_a0,puVar8,uVar22,
                                  PTR___sSbN_11034dd40);
            }
LAB_10168ba30:
            func_0x000107c6142c(uVar22);
            uVar27 = uStack_88;
            if (cStack_a1 == '\0') {
              uVar27 = 0;
            }
            puVar8 = PTR_PTR_1126a77e8;
            func_0x000107c610f8();
            puVar20 = puStack_e8;
            func_0x000107c5fadc(puStack_e8,lVar19);
            puVar21 = param_1;
            func_0x000107c5fadc(param_1,param_2);
            func_0x000107c489f0(uVar27);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar21);
            puVar20 = puVar11;
            func_0x000107c61550();
            if ((uVar14 != 0) || (puVar21 = puVar11, ((ulong)puVar20 & 1) == 0)) {
              if (uVar14 == 0) {
                puVar10 = *(undefined **)(puVar26 + 0x10);
              }
              else {
                func_0x000107c60480(puVar10);
              }
              puVar21 = (undefined *)0x0;
              func_0x00010168cdd8(0,puVar10 + 1,1,puVar11);
              puVar26 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
            }
            uVar14 = *(ulong *)(puVar26 + 0x10);
            puVar11 = puVar21;
            if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar14) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar26 + 0x18));
              func_0x00010168cdd8(puVar11,uVar14 + 1,1,puVar21);
              puVar26 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            }
            *(ulong *)(puVar26 + 0x10) = uVar14 + 1;
            *(undefined **)(puVar26 + uVar14 * 8 + 0x20) = puVar8;
            lVar16 = lVar25;
          }
          func_0x000107c6142c(uVar22);
          bVar6 = SBORROW8(lStack_108,1);
          lStack_108 = lStack_108 + -1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bb9c);
            (*pcVar5)();
          }
        } while( true );
      }
LAB_10168bba8:
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          puVar10 = puVar11;
        }
        func_0x000107c60480();
      }
      if (SBORROW8(param_3,(long)puVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf44);
        (*pcVar5)();
      }
      lVar25 = 0;
      puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        lVar16 = lVar25;
        lVar1 = lStack_d8;
        if (param_3 - (long)puVar10 <= lStack_d8) {
          lVar1 = param_3 - (long)puVar10;
        }
        while( true ) {
          puVar20 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
          puVar8 = puVar20;
          if ((undefined *)0x7fffffffffffffff < puVar26) {
            puVar8 = puVar26;
          }
          uVar14 = (ulong)puVar26 >> 0x3e;
          do {
            if (uVar14 == 0) {
              puVar21 = *(undefined **)(puVar20 + 0x10);
            }
            else {
              puVar21 = puVar8;
              func_0x000107c60480();
            }
            if (lVar1 <= (long)puVar21) {
              func_0x000107c6142c(lVar19);
              apuStack_a0[0] = puVar11;
              func_0x000107c61434(puVar11);
              func_0x000107c61434(puVar26);
              func_0x00010168cc3c();
              puVar10 = apuStack_a0[0];
              if ((ulong)apuStack_a0[0] >> 0x3e != 0) {
                puVar8 = (undefined *)((ulong)apuStack_a0[0] & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < apuStack_a0[0]) {
                  puVar8 = apuStack_a0[0];
                }
                func_0x000107c60480(puVar8);
              }
              func_0x000107c6142c(puVar26);
              func_0x000107c61170(puVar7);
              func_0x000107c6142c(puVar11);
              puVar11 = puStack_80;
              goto LAB_10168becc;
            }
            lVar17 = *(long *)(puStack_80 + 0x10);
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf0c);
              (*pcVar5)();
            }
            lVar25 = lVar16 + 1;
            if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf10);
              (*pcVar5)();
            }
            lVar4 = 0;
            if (lVar17 != 0) {
              lVar4 = lVar16 / lVar17;
            }
            lVar17 = lVar16 - lVar4 * lVar17;
            if (lVar17 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf14);
              (*pcVar5)();
            }
            lVar16 = lVar16 + 1;
          } while (*(long *)(*(long *)(puStack_80 + lVar17 * 0x10 + 0x20) + 0x10) <= lVar4);
          if (lVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10168bf5c);
            (*pcVar5)();
          }
          lVar16 = *(long *)(puStack_80 + lVar17 * 0x10 + 0x20) + lVar4 * 0x18;
          puVar21 = *(undefined **)(lVar16 + 0x20);
          uVar22 = *(ulong *)(lVar16 + 0x28);
          func_0x000107c61434(uVar22);
          puVar12 = puVar21;
          FUN_10168dee0(puVar21,uVar22,puVar26);
          if (((ulong)puVar12 & 1) != 0) break;
          puStack_90 = &uStack_88;
          uStack_88 = 0;
          if ((uVar22 >> 0x3c & 1) == 0) {
            if ((uVar22 >> 0x3d & 1) == 0) {
              if (((ulong)puVar21 >> 0x3c & 1) == 0) goto LAB_10168be04;
              ppuVar9 = (undefined **)(uVar22 + 0x20);
              if (0x20 < *(byte *)ppuVar9 ||
                  (1L << ((ulong)*(byte *)ppuVar9 & 0x3f) & 0x100003e01U) == 0) goto LAB_10168bde8;
            }
            else {
              uStack_b8 = uVar22 & 0xffffffffffffff;
              puStack_c0 = puVar21;
              if (0x20 < ((uint)puVar21 & 0xff) ||
                  (1L << ((ulong)puVar21 & 0x3f) & 0x100003e01U) == 0) {
                ppuVar9 = &puStack_c0;
LAB_10168bde8:
                func_0x000107c60eb4(ppuVar9,&uStack_88);
                if (ppuVar9 != (undefined **)0x0) {
                  cStack_a1 = *(byte *)ppuVar9 == 0;
                  goto LAB_10168bd0c;
                }
              }
            }
            cStack_a1 = '\0';
          }
          else {
LAB_10168be04:
            func_0x000107c602f0(&cStack_a1,FUN_10168e0e4,apuStack_a0,puVar21,uVar22,
                                PTR___sSbN_11034dd40);
          }
LAB_10168bd0c:
          func_0x000107c6142c(uVar22);
          uVar27 = uStack_88;
          if (cStack_a1 == '\0') {
            uVar27 = 0;
          }
          puVar21 = PTR_PTR_1126a77e8;
          func_0x000107c610f8();
          puVar12 = puStack_e8;
          func_0x000107c5fadc(puStack_e8,lVar19);
          puVar13 = param_1;
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c489f0(uVar27);
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar13);
          puVar12 = puVar26;
          func_0x000107c61550();
          if ((uVar14 != 0) || (puVar13 = puVar26, ((ulong)puVar12 & 1) == 0)) {
            if (uVar14 == 0) {
              puVar8 = *(undefined **)(puVar20 + 0x10);
            }
            else {
              func_0x000107c60480(puVar8);
            }
            puVar13 = (undefined *)0x0;
            func_0x00010168cdd8(0,puVar8 + 1,1,puVar26);
            puVar20 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          }
          uVar14 = *(ulong *)(puVar20 + 0x10);
          puVar26 = puVar13;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar14) {
            puVar26 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
            func_0x00010168cdd8(puVar26,uVar14 + 1,1,puVar13);
            puVar20 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
          }
          *(ulong *)(puVar20 + 0x10) = uVar14 + 1;
          *(undefined **)(puVar20 + uVar14 * 8 + 0x20) = puVar21;
          lVar16 = lVar25;
        }
        func_0x000107c6142c(uVar22);
        bVar6 = SBORROW8(lStack_d8,1);
        lStack_d8 = lStack_d8 + -1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10168be80);
          (*pcVar5)();
        }
      } while( true );
    }
LAB_10168becc:
    func_0x000107c6142c(puVar11);
  }
  return puVar10;
}



/* Entry: 10168bf60; end: 10168c403;  */

void FUN_10168bf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_90;
  func_0x0001000bb420(param_2,&puStack_90);
  uVar4 = 0;
  func_0x00010168e1a8(0,0x112dbeac8,&PTR_PTR_1126a77f0);
  ppuVar5 = &puStack_58;
  func_0x000107c6147c(ppuVar5,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
  puVar2 = puStack_58;
  if (((ulong)ppuVar5 & 1) != 0) {
    puStack_60 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = puVar2;
    func_0x000107c45008();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10168c1c0);
      (*pcVar3)();
    }
    puVar7 = &UNK_1103f34d8;
    func_0x000107c613fc(&UNK_1103f34d8,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = param_4;
    *(undefined ***)(puVar7 + 0x18) = &puStack_58;
    *(undefined ***)(puVar7 + 0x20) = &puStack_60;
    puVar8 = &UNK_1103f3500;
    func_0x000107c613fc(&UNK_1103f3500,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10168e1e8;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    pcStack_70 = FUN_10168e1f4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10168c404;
    puStack_78 = &UNK_1103f3518;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar10 = puStack_68;
    func_0x000107c61174(param_4);
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c429d8(puVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar6);
    puVar10 = puVar8;
    func_0x000107c61544(puVar8,"",0x6f,0x103,0x34,1);
    func_0x000107c61574(puVar8);
    puVar8 = puStack_58;
    puVar6 = puStack_60;
    if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10168c174);
      (*pcVar3)();
    }
    uVar13 = *param_5;
    func_0x000107c61434(puStack_58);
    func_0x000107c61434(puVar6);
    uVar11 = uVar13;
    func_0x000107c61558();
    *param_5 = uVar13;
    uVar12 = uVar13;
    if ((uVar11 & 1) == 0) {
      uVar12 = 0;
      FUN_10168d030(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *param_5 = uVar12;
    }
    uVar11 = *(ulong *)(uVar12 + 0x10);
    uVar13 = uVar12;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_10168d030(uVar13,uVar11 + 1,1,uVar12);
      *param_5 = uVar13;
    }
    *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
    lVar1 = uVar13 + uVar11 * 0x10;
    *(undefined **)(lVar1 + 0x20) = puVar8;
    *(undefined **)(lVar1 + 0x28) = puVar6;
    func_0x000107c61170(puVar2);
    func_0x000107c6142c(puStack_60);
    puVar2 = puStack_58;
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 10168c404; end: 10168c42f;  */

void FUN_10168c404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x20))(param_2,param_3,param_4);
  return;
}



/* Entry: 10168c430; end: 10168c4bf;  */

void FUN_10168c430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c614f0();
  uVar3 = param_3;
  auStack_60[0] = param_2;
  uStack_48 = uVar2;
  func_0x000107c614f0();
  auStack_80[0] = param_3;
  uStack_68 = uVar3;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(auStack_60,auStack_80,param_4);
  func_0x000100183ab8(auStack_80);
  func_0x000100183ab8(auStack_60);
  return;
}



/* Entry: 10168c4c0; end: 10168c5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10168c4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbea30);
  puVar2 = &UNK_1103f3258;
  func_0x000107c613fc(&UNK_1103f3258,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103f3320;
  func_0x000107c613fc(&UNK_1103f3320,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  puVar3[0x30] = param_4;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  uStack_70 = 0x10168de58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103f3338;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61434(param_3);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 10168c5fc; end: 10168c9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168c5fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5,
                  long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168c9e4);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168c9e8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168c9ec);
      (*pcVar1)();
    }
    puVar2 = &UNK_1103f33e8;
    uVar11 = 0x18;
    func_0x000107c613fc(&UNK_1103f33e8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    func_0x000107c61174();
    lVar3 = param_6;
    FUN_101689ddc();
    if (lVar3 == 0) {
      func_0x00010168e1a8();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,lVar3);
      func_0x000107c43b74(param_6);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(param_2);
    }
    else {
      lVar6 = lVar3;
      FUN_10168a228();
      if (lVar6 != 0) {
        func_0x000107c6142c();
        uVar4 = *(ulong *)(param_2 + _DAT_112dbea48);
        func_0x000107c4a658();
        if ((uVar4 & 1) == 0) {
          lVar6 = lVar3;
          func_0x000107c3dabc();
          func_0x000107c61180();
          if (lVar6 == 0) {
            lVar12 = 0;
            uVar11 = 0xe000000000000000;
          }
          else {
            lVar12 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
          }
          lVar6 = *(long *)(param_2 + _DAT_112dbea40);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar12;
            func_0x000107c5fadc(lVar12,uVar11);
            func_0x000107c49c54();
            func_0x000107c61170(lVar7);
            func_0x000107c61434(param_4);
            uVar8 = param_3;
            func_0x000107c5fadc(param_3,param_4);
            func_0x000107c6142c(param_4);
            func_0x000107c5fadc(lVar12,uVar11);
            func_0x000107c6142c(uVar11);
            lVar7 = lVar6;
            func_0x000107c49990(lVar6);
            func_0x000107c61180();
            func_0x000107c61170(uVar8);
            func_0x000107c61170(lVar12);
            puVar5 = &UNK_1103f3258;
            func_0x000107c613fc(&UNK_1103f3258,0x18,7);
            func_0x000107c61614(puVar5 + 0x10,param_2);
            puVar9 = &UNK_1103f3410;
            func_0x000107c613fc(&UNK_1103f3410,0x41,7);
            *(undefined **)(puVar9 + 0x10) = puVar5;
            *(undefined8 *)(puVar9 + 0x18) = 0x10168ded4;
            *(undefined **)(puVar9 + 0x20) = puVar2;
            *(undefined8 *)(puVar9 + 0x28) = param_3;
            *(undefined8 *)(puVar9 + 0x30) = param_4;
            *(long *)(puVar9 + 0x38) = (long)param_1;
            puVar9[0x40] = param_5 & 1;
            uStack_98 = 0x10168dedc;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            puStack_a8 = &UNK_100b5fdac;
            puStack_a0 = &UNK_1103f3428;
            ppuVar10 = &puStack_b8;
            puStack_90 = puVar9;
            func_0x000107c60bc4(ppuVar10);
            puVar5 = puStack_90;
            func_0x000107c61434(param_4);
            func_0x000107c6157c(puVar2);
            func_0x000107c61574(puVar5);
            lVar12 = lVar7;
            func_0x000107c5c320(lVar7);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c61170(lVar7);
            func_0x000107c3e924(lVar12);
            func_0x000107c61170(lVar3);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(lVar12);
            func_0x000107c61170(param_2);
            func_0x000107c61574(puVar2);
            return;
          }
          func_0x000107c6142c(uVar11);
        }
      }
      uVar11 = 0;
      func_0x00010168e1a8();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar11);
      func_0x000107c43b74(param_6);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 10168c9ec; end: 10168ca43;  */

void FUN_10168c9ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c43b74(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10168ca44; end: 10168cabf; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl searchWithText:includeFriendmoji:maxResults:] */

void FUN_10168ca44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10168c4c0(param_1,param_4,param_3,param_5);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10168cac0; end: 10168cb07;  */

void FUN_10168cac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10168cb08; end: 10168cbcf; -[_TtC37CustomojiSearchServicesImplementation26CustomojiSearchServiceImpl hasResultsWithText:includeFriendmoji:] */

void FUN_10168cb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_1103f3370;
  func_0x000107c613fc(&UNK_1103f3370,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  func_0x000107c61174(puVar1);
  FUN_10168ae18(param_3,param_2,param_4,0x10168e2f8,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10168cbd0; end: 10168cc3b;  */

void FUN_10168cbd0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dbeaa8;
  plVar5 = (long *)&UNK_10d979eb0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10168cc3c; end: 10168d02f;  */

void FUN_10168cc3c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x00010168cd28(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10168d9d4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168cd24);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10168cd28);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10168cd20);
  (*pcVar1)();
}



/* Entry: 10168d030; end: 10168d137;  */

undefined * FUN_10168d030(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d138);
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
    puVar3 = (undefined *)0x112dbead0;
    func_0x0001000285a8(0x112dbead0,&UNK_10d979ed8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1103f3190);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10168d138; end: 10168d1b7;  */

undefined * FUN_10168d138(undefined *param_1,undefined *param_2)

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
    FUN_10168cbd0();
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



/* Entry: 10168d1b8; end: 10168d2cf;  */

long FUN_10168d1b8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10168d2cc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10168d2d0);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
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
      func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10168d2c8);
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



/* Entry: 10168d2d0; end: 10168d5a7;  */

void FUN_10168d2d0(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  ulong *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uStack_68;
  
  uVar12 = *unaff_x20;
  uVar14 = *(ulong *)(uVar12 + 0x10);
  uVar2 = uVar14 - 2;
  if (1 < uVar14) {
    uVar15 = uVar12;
    func_0x000107c61558();
    if ((uVar15 & 1) == 0) {
      FUN_10168db3c();
    }
    uVar15 = 0;
    lVar1 = uVar12 + 0x20;
    do {
      uStack_68 = 0;
      func_0x000107c61598(&uStack_68,8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar14;
      lVar11 = SUB168(auVar3 * auVar5,8);
      if (uStack_68 * uVar14 < uVar14) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = -uVar14 / uVar14;
        }
        uVar13 = -uVar14 - uVar13 * uVar14;
        if (uStack_68 * uVar14 < uVar13) {
          do {
            uStack_68 = 0;
            func_0x000107c61598(&uStack_68,8);
          } while (uStack_68 * uVar14 < uVar13);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uStack_68;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar14;
          lVar11 = SUB168(auVar4 * auVar6,8);
        }
      }
      uVar13 = uVar15 + lVar11;
      if (SCARRY8(uVar15,lVar11)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10168d420);
        (*pcVar9)();
      }
      if (uVar15 != uVar13) {
        if (*(ulong *)(uVar12 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10168d424);
          (*pcVar9)();
        }
        if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10168d428);
          (*pcVar9)();
        }
        puVar7 = (undefined8 *)(lVar1 + uVar15 * 0x10);
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        puVar7 = (undefined8 *)(lVar1 + uVar13 * 0x10);
        uVar18 = puVar7[1];
        uVar17 = *puVar7;
        puVar8 = (undefined8 *)(lVar1 + uVar15 * 0x10);
        puVar8[1] = uVar18;
        *puVar8 = uVar17;
        uVar16 = *(ulong *)(uVar12 + 0x10);
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar17,uVar18);
        if (uVar16 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10168d3f8);
          (*pcVar9)();
        }
        uVar17 = *puVar7;
        uVar18 = puVar7[1];
        puVar7[1] = uVar20;
        *puVar7 = uVar19;
        func_0x000107c6142c(uVar18);
        func_0x000107c6142c(uVar17);
      }
      uVar14 = uVar14 - 1;
      bVar10 = uVar15 != uVar2;
      uVar15 = uVar15 + 1;
    } while (bVar10);
    *unaff_x20 = uVar12;
  }
  return;
}



/* Entry: 10168d5a8; end: 10168d76b;  */

ulong FUN_10168d5a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d68c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d690);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a77e8;
    func_0x000107c61168(PTR_PTR_1126a77e8);
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
    puVar4 = PTR_PTR_1126a77e8;
    func_0x000107c61168(PTR_PTR_1126a77e8);
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
  func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d76c);
  (*pcVar2)();
}



/* Entry: 10168d76c; end: 10168d7ab;  */

void FUN_10168d76c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10168d7ac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10168d7ac; end: 10168d8ab;  */

undefined * FUN_10168d7ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d8ac);
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
    puVar3 = (undefined *)0x112d5dfa8;
    func_0x0001000285a8(0x112d5dfa8,&UNK_10d9473c0);
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
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10168d8ac; end: 10168d9d3;  */

undefined *
FUN_10168d8ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10168d9d4);
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
    puVar3 = (undefined *)0x112dbeac0;
    func_0x0001000285a8(0x112dbeac0,&UNK_10d979ed0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103f3210);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10168d9d4; end: 10168db3b;  */

ulong FUN_10168d9d4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168db3c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10168db30);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x00010168e1a8(0,0x112dbeaa0,&PTR_PTR_1126a77e8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10168db34);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10168db38);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_10168d5a8(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10168db3c; end: 10168db4f;  */

/* WARNING: Removing unreachable block (ram,0x00010168cf20) */
/* WARNING: Removing unreachable block (ram,0x00010168cf30) */
/* WARNING: Removing unreachable block (ram,0x00010168d02c) */
/* WARNING: Removing unreachable block (ram,0x00010168cf3c) */
/* WARNING: Removing unreachable block (ram,0x00010168cf44) */
/* WARNING: Removing unreachable block (ram,0x00010168cfbc) */
/* WARNING: Removing unreachable block (ram,0x00010168cfc4) */
/* WARNING: Removing unreachable block (ram,0x00010168cfc8) */
/* WARNING: Removing unreachable block (ram,0x00010168cfcc) */
/* WARNING: Removing unreachable block (ram,0x00010168cfdc) */

undefined * FUN_10168db3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112dbeab0;
    func_0x0001000285a8(0x112dbeab0,&UNK_10d979ec0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112dbeab8;
  func_0x0001000285a8(0x112dbeab8,&UNK_10d979ec8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 10168db50; end: 10168db7b;  */

void FUN_10168db50(long param_1)

{
  FUN_10168d8ac(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_bridgeObjectRelease_11034f258
               );
  return;
}



/* Entry: 10168db7c; end: 10168dc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10168db7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar8;
  undefined1 auStack_b0 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uVar5 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  if (unaff_x20 == (undefined1 *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = _DAT_112dbea50;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar7) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea58) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea60) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbea68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbea70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea38) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea48) = uVar5;
  (**(code **)(lVar8 + 0x68))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar5);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efb52c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + _DAT_112dbea30) = puVar4;
  puVar6 = auStack_b0;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  return puVar6;
}



/* Entry: 10168dc3c; end: 10168de0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168dc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = _DAT_112dbea50;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea58) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea60) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbea68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbea70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbea48) = param_3;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efb52c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + _DAT_112dbea30) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10168de10; end: 10168de77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168de10(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long unaff_x20;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  bVar7 = *(byte *)(unaff_x20 + 0x30);
  bVar8 = *(byte *)(unaff_x20 + 0x31);
  pcVar3 = *(code **)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  puStack_b0 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puStack_b0,0,0);
  uVar9 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar9 == 0) {
    return;
  }
  uVar10 = uVar9;
  FUN_101689ddc();
  if (uVar10 == 0) {
    (*pcVar3)(PTR___swiftEmptyArrayStorage_11034f1c8);
    goto LAB_10168ab38;
  }
  uVar11 = uVar10;
  FUN_10168a228();
  if (uVar11 == 0) {
LAB_10168ab20:
    (*pcVar3)(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x000107c6142c();
    uVar11 = *(ulong *)(uVar9 + _DAT_112dbea48);
    func_0x000107c4a658();
    if ((uVar11 & 1) != 0) goto LAB_10168ab20;
    uVar11 = uVar10;
    func_0x000107c3dabc();
    func_0x000107c61180();
    if (uVar11 == 0) {
      uStack_b8 = 0;
      puStack_b0 = (undefined1 *)0xe000000000000000;
    }
    else {
      uStack_b8 = uVar11;
      func_0x000107c5faec();
      func_0x000107c61170(uVar11);
    }
    uVar11 = *(ulong *)(uVar9 + _DAT_112dbea40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar11 == 0) {
      func_0x000107c6142c(puStack_b0);
      goto LAB_10168ab20;
    }
    uVar12 = uStack_b8;
    func_0x000107c5fadc(uStack_b8,puStack_b0);
    uVar13 = uVar11;
    func_0x000107c49c54();
    func_0x000107c61170(uVar12);
    if (((uVar13 & 1) == 0) && ((bVar8 & 1) != 0)) {
      func_0x000107c5fadc(uStack_b8,puStack_b0);
      func_0x000107c6142c(puStack_b0);
      func_0x000107c42268(uVar11);
      func_0x000107c61170(uStack_b8);
      (*pcVar3)(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar11);
      goto LAB_10168ab38;
    }
    uVar14 = 0;
    if (lVar2 != 0) {
      uVar14 = uVar4;
    }
    lVar1 = -0x2000000000000000;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar14,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c5fadc(uStack_b8,puStack_b0);
    func_0x000107c6142c(puStack_b0);
    uVar12 = uVar11;
    func_0x000107c49990();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uStack_b8);
    puVar15 = &UNK_1103f3258;
    func_0x000107c613fc(&UNK_1103f3258,0x18,7);
    func_0x000107c61614(puVar15 + 0x10,uVar9);
    puVar16 = &UNK_1103f35a0;
    func_0x000107c613fc(&UNK_1103f35a0,0x41,7);
    *(undefined **)(puVar16 + 0x10) = puVar15;
    *(code **)(puVar16 + 0x18) = pcVar3;
    *(undefined8 *)(puVar16 + 0x20) = uVar6;
    *(undefined8 *)(puVar16 + 0x28) = uVar4;
    *(long *)(puVar16 + 0x30) = lVar2;
    *(undefined8 *)(puVar16 + 0x38) = uVar5;
    puVar16[0x40] = bVar7 & 1;
    pcStack_88 = FUN_10168e2f4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100b5fdac;
    puStack_90 = &UNK_1103f35b8;
    ppuVar17 = &puStack_a8;
    puStack_80 = puVar16;
    func_0x000107c60bc4(ppuVar17);
    puVar15 = puStack_80;
    func_0x000107c61434(lVar2);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar15);
    uVar13 = uVar12;
    func_0x000107c5c320(uVar12);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(uVar12);
    func_0x000107c3e924(uVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar11);
    uVar10 = uVar13;
  }
  func_0x000107c61170(uVar10);
LAB_10168ab38:
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 10168de78; end: 10168de97;  */

void FUN_10168de78(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4018);
  return;
}



/* Entry: 10168de98; end: 10168dedf;  */

void FUN_10168de98(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010168dea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10168dee0; end: 10168e0e3;  */

undefined8 FUN_10168dee0(double param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  ulong uStack_b0;
  ulong uStack_a8;
  byte bStack_91;
  undefined1 auStack_90 [16];
  double *pdStack_80;
  double dStack_78;
  
  if (param_4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar7 = param_4;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((param_4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10168e0a4);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_4 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar8;
        FUN_10168d5a8(uVar8,param_4);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10168e0a0);
        (*pcVar3)();
      }
      func_0x000107c5bd8c(uVar5);
      pdStack_80 = &dStack_78;
      dStack_78 = 0.0;
      dVar9 = param_1;
      if ((param_3 >> 0x3c & 1) == 0) {
        if ((param_3 >> 0x3d & 1) == 0) {
          if ((param_2 >> 0x3c & 1) == 0) goto LAB_10168e05c;
          bVar2 = *(byte *)((param_3 & 0xfffffffffffffff) + 0x20);
          if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100003e01U) == 0)) {
            puVar6 = (ulong *)((param_3 & 0xfffffffffffffff) + 0x20);
            goto LAB_10168e040;
          }
        }
        else {
          uStack_b0 = param_2;
          uStack_a8 = param_3 & 0xffffffffffffff;
          if ((0x20 < ((uint)param_2 & 0xff)) || ((1L << (param_2 & 0x3f) & 0x100003e01U) == 0)) {
            puVar6 = &uStack_b0;
LAB_10168e040:
            func_0x000107c60eb4(puVar6,&dStack_78);
            if (puVar6 != (ulong *)0x0) {
              bStack_91 = (char)*puVar6 == '\0';
              goto LAB_10168e020;
            }
          }
        }
        bStack_91 = 0;
      }
      else {
LAB_10168e05c:
        func_0x000107c602f0(&bStack_91,0x10168e2e0,auStack_90,param_2,param_3,PTR___sSbN_11034dd40);
      }
LAB_10168e020:
      func_0x000107c61170(uVar5);
      if ((bStack_91 & 1) == 0) {
        bVar4 = param_1 == -1.0;
        param_1 = dVar9;
        if (bVar4) {
          return 1;
        }
      }
      else {
        bVar4 = param_1 == dStack_78;
        param_1 = dStack_78;
        if (bVar4) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  return 0;
}



/* Entry: 10168e0e4; end: 10168e0f7;  */

void FUN_10168e0e4(void)

{
  FUN_10168e0f8();
  return;
}



/* Entry: 10168e0f8; end: 10168e16f;  */

void FUN_10168e0f8(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10168e170; end: 10168e187;  */

void FUN_10168e170(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10168e188; end: 10168e1e7;  */

void FUN_10168e188(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10168e1e8; end: 10168e1f3;  */

void FUN_10168e1e8(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  puVar1 = *(ulong **)(unaff_x20 + 0x18);
  puVar8 = *(ulong **)(unaff_x20 + 0x20);
  uVar3 = uVar4;
  func_0x000107c5b588();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10168c400);
    (*pcVar2)();
  }
  uVar10 = uVar3;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar10 == 0) {
    func_0x000107c43a60();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10168c404);
      (*pcVar2)();
    }
  }
  else {
    func_0x000107c61170(uVar10);
    func_0x000107c5b588();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10168c240);
      (*pcVar2)();
    }
  }
  uVar3 = uVar4;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar3;
  func_0x000107c4c818();
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d8();
  puVar6 = puVar5;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5faec();
  func_0x000107c61170(puVar6);
  if (uVar10 == 0) {
    uVar7 = *puVar8;
    uVar3 = uVar7;
    func_0x000107c61558();
    *puVar8 = uVar7;
    uVar10 = uVar7;
    if ((uVar3 & 1) == 0) {
      uVar10 = 0;
      FUN_10168d8ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7,PTR__swift_bridgeObjectRelease_11034f258);
      *puVar8 = uVar10;
    }
    uVar3 = *(ulong *)(uVar10 + 0x10);
    lVar9 = uVar3 + 1;
    uVar7 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_10168d8ac(uVar7,lVar9,1,uVar10,PTR__swift_bridgeObjectRelease_11034f258);
      *puVar8 = uVar7;
    }
  }
  else {
    uVar10 = *puVar1;
    uVar3 = uVar10;
    func_0x000107c61558();
    *puVar1 = uVar10;
    uVar7 = uVar10;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
      FUN_10168d8ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10,PTR__swift_bridgeObjectRelease_11034f258
                   );
      *puVar1 = uVar7;
    }
    uVar3 = *(ulong *)(uVar7 + 0x10);
    lVar9 = uVar3 + 1;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar3) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_10168d8ac(uVar10,lVar9,1,uVar7,PTR__swift_bridgeObjectRelease_11034f258);
      *puVar1 = uVar10;
      uVar7 = uVar10;
    }
  }
  *(long *)(uVar7 + 0x10) = lVar9;
  lVar9 = uVar7 + uVar3 * 0x18;
  *(undefined **)(lVar9 + 0x20) = puVar5;
  *(undefined8 *)(lVar9 + 0x28) = param_2;
  *(ulong *)(lVar9 + 0x30) = uVar4 & 0xffffffff;
  return;
}



/* Entry: 10168e1f4; end: 10168e213;  */

void FUN_10168e1f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10168e214; end: 10168e223;  */

void FUN_10168e214(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10168e224; end: 10168e24b;  */

void FUN_10168e224(uint param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c3ebcc();
  (*pcVar1)(param_1 ^ 1);
  return;
}



/* Entry: 10168e24c; end: 10168e27f;  */

void FUN_10168e24c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10168e280; end: 10168e2cb;  */

void FUN_10168e280(int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c3ebcc();
    if (param_1 == 0) {
      uVar8 = 0;
      if (lVar2 != 0) {
        uVar8 = uVar4;
      }
      lVar1 = -0x2000000000000000;
      if (lVar2 != 0) {
        lVar1 = lVar2;
      }
      func_0x000107c61434(lVar2);
      FUN_10168b478(uVar8,lVar1,uVar5,bVar6 & 1);
      func_0x000107c6142c(lVar1);
      (*pcVar3)(uVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(uVar8);
    }
    else {
      (*pcVar3)(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 10168e2cc; end: 10168e2f3;  */

void FUN_10168e2cc(void)

{
  FUN_10168e0e4();
  return;
}



/* Entry: 10168e2f4; end: 10168e2fb;  */

void FUN_10168e2f4(int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c3ebcc();
    if (param_1 == 0) {
      uVar8 = 0;
      if (lVar2 != 0) {
        uVar8 = uVar4;
      }
      lVar1 = -0x2000000000000000;
      if (lVar2 != 0) {
        lVar1 = lVar2;
      }
      func_0x000107c61434(lVar2);
      FUN_10168b478(uVar8,lVar1,uVar5,bVar6 & 1);
      func_0x000107c6142c(lVar1);
      (*pcVar3)(uVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(uVar8);
    }
    else {
      (*pcVar3)(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 10168e2fc; end: 10168e507;  */

void FUN_10168e2fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(puStack_a0);
  FUN_101690638(0);
  func_0x000107c610f8();
  FUN_10168e688();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10168e56c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10168e5c0;
  puStack_88 = &UNK_1103f3648;
  puStack_78 = (undefined *)param_3;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_1103f3680;
  func_0x000107c613fc(&UNK_1103f3680,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar1;
  pcStack_80 = (code *)0x10168e5ac;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10168e5bc;
  puStack_88 = &UNK_1103f3698;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  FUN_10168de78(0);
  func_0x000107c610f8();
  puVar7 = puVar2;
  FUN_10168dc3c(puVar2,puVar4,puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar5);
  *param_1 = puVar7;
  return;
}



/* Entry: 10168e508; end: 10168e513;  */

void FUN_10168e508(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  func_0x000100083b20(&puStack_a0,*(undefined8 *)(unaff_x20 + 0x10),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x20));
  puVar2 = puStack_a0;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(puStack_a0);
  FUN_101690638(0);
  func_0x000107c610f8();
  FUN_10168e688();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10168e56c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10168e5c0;
  puStack_88 = &UNK_1103f3648;
  puStack_78 = (undefined *)uVar1;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_1103f3680;
  func_0x000107c613fc(&UNK_1103f3680,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  pcStack_80 = (code *)0x10168e5ac;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10168e5bc;
  puStack_88 = &UNK_1103f3698;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000100083b20(&puStack_a0);
  puVar6 = puStack_a0;
  FUN_10168de78(0);
  func_0x000107c610f8();
  puVar8 = puVar3;
  FUN_10168dc3c(puVar3,puVar5,puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(puVar6);
  *param_1 = puVar8;
  return;
}



/* Entry: 10168e514; end: 10168e54b;  */

void FUN_10168e514(long param_1)

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



/* Entry: 10168e54c; end: 10168e56b;  */

undefined1  [16] FUN_10168e54c(void)

{
  return ZEXT816(0x1103f3618);
}



/* Entry: 10168e56c; end: 10168e58f;  */

undefined8 FUN_10168e56c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}


