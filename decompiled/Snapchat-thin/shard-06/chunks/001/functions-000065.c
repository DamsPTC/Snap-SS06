/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10445f3fc; end: 10445f4c3; -[_TtC14CallUIServices14CallUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445f3fc(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b888));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b890));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b898));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b8a0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b8a8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b8b0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307b8e8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307b8b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b8c0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b8d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307b8e0));
  return;
}



/* Entry: 10445f4c4; end: 10445f4e3;  */

void FUN_10445f4c4(void)

{
  _objc_opt_self(&PTR_PTR_1129b9340);
  return;
}



/* Entry: 10445f4e4; end: 10445f4f7;  */

bool FUN_10445f4e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10445f4f8; end: 10445f5a3;  */

void FUN_10445f4f8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10445f5a4; end: 10445f5a7;  */

void FUN_10445f5a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02de0;
  _swift_getWitnessTable(&UNK_10dd02de0,&UNK_110772ab0);
  puRam000000011307b918 = puVar1;
  return;
}



/* Entry: 10445f5a8; end: 10445f5e7;  */

void FUN_10445f5a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02de0;
  _swift_getWitnessTable(&UNK_10dd02de0,&UNK_110772ab0);
  puRam000000011307b918 = puVar1;
  return;
}



/* Entry: 10445f5e8; end: 10445f75f;  */

int FUN_10445f5e8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10445f664;
        goto LAB_10445f648;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10445f648:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10445f664:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10445f760; end: 10445f80b;  */

void FUN_10445f760(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10445f80c; end: 10445f80f;  */

void FUN_10445f80c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02e70;
  _swift_getWitnessTable(&UNK_10dd02e70,&UNK_110772b78);
  puRam000000011307b920 = puVar1;
  return;
}



/* Entry: 10445f810; end: 10445f84f;  */

void FUN_10445f810(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02e70;
  _swift_getWitnessTable(&UNK_10dd02e70,&UNK_110772b78);
  puRam000000011307b920 = puVar1;
  return;
}



/* Entry: 10445f850; end: 10445f9b3;  */

int FUN_10445f850(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10445f8cc;
        goto LAB_10445f8b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10445f8b0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10445f8cc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10445f9b4; end: 10445fa5f;  */

void FUN_10445f9b4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10445fa60; end: 10445fa9f;  */

void FUN_10445fa60(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10445faa0; end: 10445faff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445faa0(char param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar2 = unaff_x20;
  _objc_allocWithZone();
  plVar1 = alStack_30;
  if (param_1 != '\x01') {
    plVar1 = alStack_40;
  }
  *(bool *)(lVar2 + _DAT_11307b928) = param_1 == '\x01';
  *plVar1 = lVar2;
  plVar1[1] = unaff_x20;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445fb00; end: 10445fb1b; -[SCOutOfAppPipCallLifecycleEvent description] */

void FUN_10445fb00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445fb1c; end: 10445fb63; -[SCOutOfAppPipCallLifecycleEvent init] */

void FUN_10445fb1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "CallUIServices/OutOfAppPipCallLifecycleEventWrapper.swift",0x39,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445fb64);
  (*pcVar1)();
}



/* Entry: 10445fb64; end: 10445fb67; -[SCOutOfAppPipCallLifecycleEvent copyWithZone:] */

void FUN_10445fb64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10445fb68; end: 10445fb6f; +[SCOutOfAppPipCallLifecycleEvent willStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fb68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307b928) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445fb70; end: 10445fb77; +[SCOutOfAppPipCallLifecycleEvent didStop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fb70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307b928) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445fb78; end: 10445fbc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fb78(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307b928) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445fbc8; end: 10445fbe3; -[SCOutOfAppPipCallLifecycleEvent matchWillStart:didStop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fbc8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11307b928) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010445fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10445fbe4; end: 10445fc37;  */

void FUN_10445fbe4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445fc38; end: 10445fd9f;  */

int FUN_10445fc38(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10445fcb4;
        goto LAB_10445fc98;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10445fc98:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10445fcb4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10445fda0; end: 10445fddf;  */

void FUN_10445fda0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd02f58;
  _swift_getWitnessTable(&UNK_10dd02f58,&UNK_110772c40);
  puRam000000011307b958 = puVar1;
  return;
}



/* Entry: 10445fde0; end: 10445fe2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fde0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b960) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445fe2c; end: 10445fe8b; -[CallUILaunchingServices init] */

void FUN_10445fe2c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CallUILaunchingServices.CallUILaunchingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445fe58);
  (*pcVar1)();
}



/* Entry: 10445fe8c; end: 10445fe9b; -[CallUILaunchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445fe8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307b960));
  return;
}



/* Entry: 10445fe9c; end: 10445fed7; -[_TtC23CallUILaunchingServices31TalkDemoDummyNavigationServices init] */

void FUN_10445fe9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445fed8; end: 10445ff2b;  */

void FUN_10445fed8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ff2c; end: 1044600bb;  */

uint FUN_10445ff2c(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  bVar6 = *(byte *)(param_2 + 2);
  bVar7 = *(byte *)(param_1 + 2) >> 6;
  uVar8 = (uint)param_1[1];
  uVar9 = (uint)param_2[1];
  uVar2 = uVar9 ^ uVar8 ^ 1;
  if (lVar4 != lVar5) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (0xbf < bVar6) {
    uVar3 = uVar2;
  }
  uVar2 = (uint)((char)bVar6 < -0x40 && lVar4 == lVar5);
  if (bVar7 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = (bVar6 ^ *(byte *)(param_1 + 2)) ^ 1;
  if (param_1[1] != param_2[1]) {
    uVar3 = 0;
  }
  uVar1 = 0;
  if (lVar4 == lVar5) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (bVar6 < 0x40) {
    uVar3 = uVar1;
  }
  uVar8 = uVar9 ^ uVar8 ^ 1;
  if (lVar4 != lVar5) {
    uVar8 = 0;
  }
  uVar9 = 0;
  if ((bVar6 & 0xc0) == 0x40) {
    uVar9 = uVar8;
  }
  if (bVar7 != 0) {
    uVar3 = uVar9;
  }
  if (bVar7 < 2) {
    uVar2 = uVar3;
  }
  return uVar2 & 1;
}



/* Entry: 1044600bc; end: 104460167;  */

void FUN_1044600bc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104460168; end: 10446016b;  */

void FUN_104460168(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd030d0;
  _swift_getWitnessTable(&UNK_10dd030d0,&UNK_110772e48);
  puRam000000011307b9b8 = puVar1;
  return;
}



/* Entry: 10446016c; end: 1044601ab;  */

void FUN_10446016c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307b9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd030d0;
  _swift_getWitnessTable(&UNK_10dd030d0,&UNK_110772e48);
  puRam000000011307b9b8 = puVar1;
  return;
}



/* Entry: 1044601ac; end: 104460323;  */

bool FUN_1044601ac(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104460324; end: 1044603f7;  */

void FUN_104460324(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044603f8; end: 104460417;  */

void FUN_1044603f8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104460418; end: 10446060b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104460418(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long unaff_x20;
  long *plVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uStack_c0;
  byte bStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [8];
  
  uVar2 = param_3 >> 6 & 3;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      uVar9 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      bStack_bc = (byte)param_3 & 1;
      plVar6 = alStack_a0;
      bVar7 = 2;
      uStack_c0 = 1;
      uVar10 = 1;
      uVar8 = 1;
      bVar5 = 2;
      uVar4 = 0;
      uStack_b8 = param_1;
    }
    else {
      uStack_b8 = 0;
      uStack_a8 = 0;
      bVar7 = (byte)param_2 & 1;
      plVar6 = alStack_a0 + 2;
      uStack_c0 = 0;
      bStack_bc = 2;
      uVar9 = 1;
      uVar10 = 1;
      uVar8 = 1;
      bVar5 = 2;
      param_2 = 0;
      uVar4 = 0;
      uStack_b0 = param_1;
    }
  }
  else if (uVar2 == 2) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    param_2 = 0;
    uVar10 = 0;
    plVar6 = alStack_a0 + 4;
    uVar9 = 1;
    uStack_c0 = 1;
    uVar8 = 1;
    bVar5 = 2;
    bVar7 = 2;
    bStack_bc = 2;
    uVar4 = 0;
    uStack_a8 = param_1;
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar8 = 0;
    bVar5 = (byte)param_2 & 1;
    plVar6 = alStack_a0 + 6;
    uVar9 = 1;
    uStack_c0 = 1;
    bStack_bc = 2;
    bVar7 = 2;
    uVar10 = 1;
    param_2 = 0;
    uVar4 = param_1;
  }
  lVar3 = unaff_x20;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_11307b9c0) = (char)uVar2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b9c8);
  *puVar1 = uStack_b8;
  *(undefined1 *)(puVar1 + 1) = uVar9;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b9d0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = uVar9;
  *(byte *)(lVar3 + _DAT_11307b9d8) = bStack_bc;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b9e0);
  *puVar1 = uStack_b0;
  *(undefined1 *)(puVar1 + 1) = uStack_c0;
  *(byte *)(lVar3 + _DAT_11307b9e8) = bVar7;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b9f0);
  *puVar1 = uStack_a8;
  *(undefined1 *)(puVar1 + 1) = uVar10;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307b9f8);
  *puVar1 = uVar4;
  *(undefined1 *)(puVar1 + 1) = uVar8;
  *(byte *)(lVar3 + _DAT_11307ba00) = bVar5;
  *plVar6 = lVar3;
  plVar6[1] = unaff_x20;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446060c; end: 10446062f; -[SCModularCallLaunchAction description] */

void FUN_10446060c(void)

{
  _objc_retain();
  FUN_104460e64();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104460630; end: 104460633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104460630(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11307b9c0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9c8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb0);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9d0 + 8) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc0);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9d8) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fcc);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9c8);
      _objc_release();
    }
    else {
      if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9e0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb8);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9e8) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc4);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9e0);
      _objc_release();
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb4);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9f0);
    _objc_release();
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9f8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fbc);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + _DAT_11307ba00) == '\x02') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc8);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9f8);
    _objc_release();
  }
  return uVar3;
}



/* Entry: 104460634; end: 10446067b; -[SCModularCallLaunchAction init] */

void FUN_104460634(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "CallUILaunchingServices/ModularCallLaunchActionWrapper.swift",0x3c,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10446067c);
  (*pcVar1)();
}



/* Entry: 10446067c; end: 10446069b; -[SCModularCallLaunchAction hash] */

void FUN_10446067c(void)

{
  FUN_10446069c();
  return;
}



/* Entry: 10446069c; end: 104460b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446069c(void)

{
  byte bVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11307b9c0));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9c8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307b9c8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9d0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307b9d0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307b9d8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9e0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307b9e0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307b9e8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9f0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307b9f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9f8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11307b9f8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307ba00);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104460b48; end: 104460bc7; -[SCModularCallLaunchAction isEqual:] */

uint FUN_104460b48(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001044608dc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104460bc8; end: 104460bcf; -[SCModularCallLaunchAction copyWithZone:] */

void FUN_104460bc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104460bd0; end: 104460bef; +[SCModularCallLaunchAction startCallWithCallMedia:sourceType:isHangout:] */

void FUN_104460bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104460fcc(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104460bf0; end: 104460bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104460bf0(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104461378();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b9c0) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9d8) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307b9e0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_11307b9e8) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307ba00) = 2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104460bf4; end: 104460c0f; +[SCModularCallLaunchAction joinCallWithCallMedia:isFromInvite:] */

void FUN_104460bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001044610bc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104460c10; end: 104460c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104460c10(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104461378();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b9c0) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9d8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9e8) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307b9f0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307ba00) = 2;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104460c14; end: 104460c2b; +[SCModularCallLaunchAction showCallWithCallMedia:] */

void FUN_104460c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1044611a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104460c2c; end: 104460c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104460c2c(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104461378();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b9c0) = 3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9d8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9e8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar4 + _DAT_11307b9f8);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_11307ba00) = param_2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104460c30; end: 104460c4b; +[SCModularCallLaunchAction showCallPreviewWithCallMedia:fullscreen:] */

void FUN_104460c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104461288(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104460c4c; end: 104460dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104460c4c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307b9c0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9c8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460d90);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460da0);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_11307b9d8) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460dac);
        (*pcVar2)();
      }
      (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11307b9c8),
                 *(undefined8 *)(unaff_x20 + _DAT_11307b9d0),
                 *(byte *)(unaff_x20 + _DAT_11307b9d8) & 1);
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9e0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460d98);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_11307b9e8) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460da4);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307b9e0),
                 *(byte *)(unaff_x20 + _DAT_11307b9e8) & 1);
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460d94);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307b9f0));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307b9f8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460d9c);
      (*pcVar2)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11307ba00) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460da8);
      (*pcVar2)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_11307b9f8),*(byte *)(unaff_x20 + _DAT_11307ba00) & 1
              );
  }
  return;
}



/* Entry: 104460dac; end: 104460e1f; -[SCModularCallLaunchAction matchStartCall:joinCall:showCall:showCallPreview:] */

void FUN_104460dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104460c4c(FUN_104461540,auStack_40,0x10446155c,auStack_60,0x104461574,auStack_80,0x104461584,
                auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 104460e20; end: 104460e53;  */

void FUN_104460e20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104460e54; end: 104460e63;  */

ulong FUN_104460e54(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104460e64; end: 1044611a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104460e64(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11307b9c0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9c8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb0);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9d0 + 8) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc0);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9d8) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fcc);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9c8);
      _objc_release();
    }
    else {
      if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9e0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb8);
        (*pcVar2)();
      }
      if (*(char *)(param_1 + _DAT_11307b9e8) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc4);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9e0);
      _objc_release();
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fb4);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9f0);
    _objc_release();
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307b9f8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fbc);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + _DAT_11307ba00) == '\x02') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104460fc8);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307b9f8);
    _objc_release();
  }
  return uVar3;
}



/* Entry: 1044611a8; end: 104461287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044611a8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104461378();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b9c0) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9d8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9e8) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307b9f0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307ba00) = 2;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104461288; end: 104461377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104461288(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104461378();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307b9c0) = 3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9d8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307b9e8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar4 + _DAT_11307b9f8);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_11307ba00) = param_2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104461378; end: 104461397;  */

void FUN_104461378(void)

{
  _objc_opt_self(&PTR_PTR_1129b9690);
  return;
}



/* Entry: 104461398; end: 1044614ff;  */

int FUN_104461398(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104461414;
        goto LAB_1044613f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044613f8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104461414:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104461500; end: 10446153f;  */

void FUN_104461500(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ba30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03160;
  _swift_getWitnessTable(&UNK_10dd03160,&UNK_110772f10);
  puRam000000011307ba30 = puVar1;
  return;
}



/* Entry: 104461540; end: 104461587;  */

void FUN_104461540(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104461558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1,param_2,param_3 & 1);
  return;
}



/* Entry: 104461588; end: 104461633;  */

void FUN_104461588(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104461634; end: 104461673;  */

void FUN_104461634(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104461674; end: 10446168f; -[SCModularCallLifecycleEvent description] */

void FUN_104461674(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104461690; end: 1044616d7; -[SCModularCallLifecycleEvent init] */

void FUN_104461690(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "CallUILaunchingServices/ModularCallLifecycleEventWrapper.swift",0x3e,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044616d8);
  (*pcVar1)();
}



/* Entry: 1044616d8; end: 10446171f; -[SCModularCallLifecycleEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044616d8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11307ba38));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104461720; end: 1044617bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104461720(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11307ba38);
      cVar2 = *(char *)(lStack_58 + _DAT_11307ba38);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1044617c0; end: 10446183f; -[SCModularCallLifecycleEvent isEqual:] */

uint FUN_1044617c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104461720(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104461840; end: 104461843; -[SCModularCallLifecycleEvent copyWithZone:] */

void FUN_104461840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104461844; end: 10446184b; +[SCModularCallLifecycleEvent willLaunch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104461844(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307ba38) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10446184c; end: 104461853; +[SCModularCallLifecycleEvent didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446184c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307ba38) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104461854; end: 1044618a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104461854(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307ba38) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044618a4; end: 1044618bf; -[SCModularCallLifecycleEvent matchWillLaunch:didDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044618a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11307ba38) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001044618bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1044618c0; end: 1044618f3;  */

void FUN_1044618c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044618f4; end: 104461a5b;  */

int FUN_1044618f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104461970;
        goto LAB_104461954;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104461954:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104461970:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104461a5c; end: 104461a9b;  */

void FUN_104461a5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ba68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd03244;
  _swift_getWitnessTable(&UNK_10dd03244,&UNK_110772ff8);
  puRam000000011307ba68 = puVar1;
  return;
}



/* Entry: 104461a9c; end: 104461b8f;  */

bool FUN_104461a9c(long *param_1,long *param_2)

{
  if ((char)param_1[2] == '\x01') {
    return (char)param_2[2] == '\x01' && *param_1 == *param_2;
  }
  return (*param_1 == *param_2 && param_1[1] == param_2[1]) && (char)param_2[2] != '\x01';
}



/* Entry: 104461b90; end: 104461bd7;  */

uint FUN_104461b90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_104461bd8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104461bd8; end: 104461d17;  */

ulong FUN_104461bd8(byte *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  
  bVar8 = *param_1;
  bVar9 = param_1[0x20];
  if (bVar9 < 2) {
    if (bVar9 == 0) {
      if ((byte)param_2[4] == 0) {
        uVar6 = 0;
        if (((bVar8 ^ (byte)*param_2) & 1) == 0) {
          uVar6 = (param_1[1] ^ *(byte *)((long)param_2 + 1)) ^ 1;
        }
        goto LAB_104461cfc;
      }
    }
    else if ((byte)param_2[4] == 1) {
      uVar5 = *(ulong *)(param_1 + 0x10);
      uVar7 = *(ulong *)(param_1 + 0x18);
      uVar4 = (ulong)CONCAT11(param_1[1],bVar8) |
              (ulong)*(uint *)(param_1 + 2) << 0x10 | (ulong)*(ushort *)(param_1 + 6) << 0x30;
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (uVar4 != *param_2 || *(ulong *)(param_1 + 8) != param_2[1]) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,*(ulong *)(param_1 + 8),*param_2,param_2[1],0);
        uVar6 = 0;
        if ((uVar4 & 1) == 0) goto LAB_104461cfc;
      }
      if ((uVar5 != uVar1) || (uVar7 != uVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar5,uVar7,uVar1,uVar2,0);
        return uVar5;
      }
LAB_104461d10:
      uVar6 = 1;
      goto LAB_104461cfc;
    }
  }
  else if (bVar9 == 2) {
    if ((byte)param_2[4] == 2) {
      uVar6 = (byte)(bVar8 ^ (byte)*param_2) ^ 1;
      goto LAB_104461cfc;
    }
  }
  else if ((byte)param_2[4] == 3) {
    uVar5 = param_2[3];
    uVar1 = param_2[2];
    bVar8 = (byte)*param_2 | (byte)uVar1;
    bVar9 = *(byte *)((long)param_2 + 1) | (byte)(uVar1 >> 8);
    bVar10 = *(byte *)((long)param_2 + 2) | (byte)(uVar1 >> 0x10);
    bVar11 = *(byte *)((long)param_2 + 3) | (byte)(uVar1 >> 0x18);
    bVar12 = *(byte *)((long)param_2 + 4) | (byte)(uVar1 >> 0x20);
    bVar13 = *(byte *)((long)param_2 + 5) | (byte)(uVar1 >> 0x28);
    bVar14 = *(byte *)((long)param_2 + 6) | (byte)(uVar1 >> 0x30);
    bVar15 = *(byte *)((long)param_2 + 7) | (byte)(uVar1 >> 0x38);
    bVar16 = (byte)param_2[1] | (byte)uVar5;
    bVar17 = *(byte *)((long)param_2 + 9) | (byte)(uVar5 >> 8);
    bVar18 = *(byte *)((long)param_2 + 10) | (byte)(uVar5 >> 0x10);
    bVar19 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar5 >> 0x18);
    bVar20 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar5 >> 0x20);
    bVar21 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar5 >> 0x28);
    bVar22 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar5 >> 0x30);
    bVar23 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar5 >> 0x38);
    auVar24[1] = bVar9;
    auVar24[0] = bVar8;
    auVar24[2] = bVar10;
    auVar24[3] = bVar11;
    auVar24[4] = bVar12;
    auVar24[5] = bVar13;
    auVar24[6] = bVar14;
    auVar24[7] = bVar15;
    auVar24[8] = bVar16;
    auVar24[9] = bVar17;
    auVar24[10] = bVar18;
    auVar24[0xb] = bVar19;
    auVar24[0xc] = bVar20;
    auVar24[0xd] = bVar21;
    auVar24[0xe] = bVar22;
    auVar24[0xf] = bVar23;
    auVar3[1] = bVar9;
    auVar3[0] = bVar8;
    auVar3[2] = bVar10;
    auVar3[3] = bVar11;
    auVar3[4] = bVar12;
    auVar3[5] = bVar13;
    auVar3[6] = bVar14;
    auVar3[7] = bVar15;
    auVar3[8] = bVar16;
    auVar3[9] = bVar17;
    auVar3[10] = bVar18;
    auVar3[0xb] = bVar19;
    auVar3[0xc] = bVar20;
    auVar3[0xd] = bVar21;
    auVar3[0xe] = bVar22;
    auVar3[0xf] = bVar23;
    auVar24 = NEON_ext(auVar24,auVar3,8,1);
    if (CONCAT17(bVar15 | auVar24[7],
                 CONCAT16(bVar14 | auVar24[6],
                          CONCAT15(bVar13 | auVar24[5],
                                   CONCAT14(bVar12 | auVar24[4],
                                            CONCAT13(bVar11 | auVar24[3],
                                                     CONCAT12(bVar10 | auVar24[2],
                                                              CONCAT11(bVar9 | auVar24[1],
                                                                       bVar8 | auVar24[0]))))))) ==
        0) goto LAB_104461d10;
  }
  uVar6 = 0;
LAB_104461cfc:
  return (ulong)(uVar6 & 1);
}



/* Entry: 104461d18; end: 104461d7b;  */

long FUN_104461d18(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104461d7c; end: 104461d8f;  */

undefined8 FUN_104461d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  if (*(char *)(param_1 + 4) == '\x01') {
    _swift_bridgeObjectRelease(param_1[1],param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 104461d90; end: 104461dc7;  */

void FUN_104461d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 == '\x01') {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
  return;
}



/* Entry: 104461dc8; end: 104461e97;  */

undefined8 * FUN_104461dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000104461d44(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 104461e98; end: 104461edf;  */

undefined8 * FUN_104461e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_104461d90(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 104461ee0; end: 104461fb7;  */

int FUN_104461ee0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104461fb8; end: 10446200f;  */

uint FUN_104461fb8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  uVar5 = *param_2;
  bVar2 = *(byte *)(param_2 + 1);
  uVar3 = 0;
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar5,uVar3);
  return (uint)uVar4 & ((bVar1 ^ bVar2) ^ 0xffffffff) & 1;
}



/* Entry: 104462010; end: 104462017;  */

void FUN_104462010(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 104462018; end: 104462063;  */

undefined8 * FUN_104462018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 104462064; end: 10446209f;  */

undefined8 * FUN_104462064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1044620a0; end: 10446213f;  */

int FUN_1044620a0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104462140; end: 104462197;  */

uint FUN_104462140(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_104462198(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104462198; end: 1044622eb;  */

undefined8 FUN_104462198(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && (param_1[2] == param_2[2])) &&
     ((uVar1 = param_1[3], uVar1 == param_2[3] && param_1[4] == param_2[4] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[5];
    if ((((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar1 & 1) != 0)) && ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)) {
      uVar1 = param_2[9];
      if (param_1[9] == 0) {
        if (uVar1 == 0) {
          return 1;
        }
      }
      else if ((uVar1 != 0) &&
              (((uVar2 = param_1[8], uVar2 == param_2[8] && (param_1[9] == uVar1)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar2 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1044622ec; end: 10446241b;  */

undefined8 * FUN_1044622ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 10446241c; end: 10446248f;  */

undefined8 * FUN_10446241c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104462490; end: 10446253b;  */

int FUN_104462490(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10446253c; end: 1044625a3;  */

byte FUN_10446253c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1[2];
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  if (param_1[1] == 0) {
    if (uVar4 == 0) goto LAB_104462584;
  }
  else if ((uVar4 != 0) &&
          ((uVar3 = *param_1, uVar3 == *param_2 && param_1[1] == uVar4 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)))) {
LAB_104462584:
    return (byte)uVar1 ^ (byte)uVar2 ^ 1;
  }
  return 0;
}



/* Entry: 1044625a4; end: 1044625ab;  */

void FUN_1044625a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1044625ac; end: 1044625df;  */

undefined8 * FUN_1044625ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1044625e0; end: 104462633;  */

undefined8 * FUN_1044625e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}


