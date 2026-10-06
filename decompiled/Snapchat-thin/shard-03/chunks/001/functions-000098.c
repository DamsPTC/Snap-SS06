/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102500e78; end: 102500e87; -[_TtC27LensNamespaceCameraServices27LensNamespaceCameraServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102500e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea2b18));
  return;
}



/* Entry: 102500e88; end: 102501007;  */

void FUN_102500e88(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 3;
  func_0x000107c602e8();
  lVar13 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar13 * 0x10 + 0x112ea2b70);
    uVar4 = *(ulong *)(lVar13 * 0x10 + 0x112ea2b78);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar4);
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar3,uVar4);
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar12 >> 6;
    uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
    uVar10 = 1L << (uVar12 & 0x3f);
    if ((uVar10 & uVar9) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        if ((uVar8 == uVar3 && uVar9 == uVar4) ||
           (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          goto LAB_102500ef0;
        }
        uVar12 = uVar12 + 1 & ~uVar11;
        uVar8 = uVar12 >> 6;
        uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
        uVar10 = 1L << (uVar12 & 0x3f);
      } while ((uVar10 & uVar9) != 0);
    }
    *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102501008);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_102500ef0:
    lVar13 = lVar13 + 1;
    if (lVar13 == 3) {
      func_0x000107c61408(0x112ea2b70,3,PTR___sSSN_11034da80);
      lRam0000000113804728 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 102501008; end: 10250101b;  */

bool FUN_102501008(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10250101c; end: 1025010c7;  */

void FUN_10250101c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1025010c8; end: 1025010d7;  */

void FUN_1025010c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1025010d8; end: 102501137; -[_TtC31LensNamespaceDeepLinkProcessing30LensNamespaceDeepLinkProcessor init] */

void FUN_1025010d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensNamespaceDeepLinkProcessing.LensNamespaceDeepLinkProcessor",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102501104);
  (*pcVar1)();
}



/* Entry: 102501138; end: 10250116f; -[_TtC31LensNamespaceDeepLinkProcessing30LensNamespaceDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102501138(long param_1)

{
  func_0x000100f1fd80(param_1 + _DAT_112ea2ba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea2bb0));
  return;
}



/* Entry: 102501170; end: 10250118f;  */

void FUN_102501170(void)

{
  func_0x000107c61168(&PTR_PTR_11284a950);
  return;
}



/* Entry: 102501190; end: 1025011f7; -[_TtC31LensNamespaceDeepLinkProcessing30LensNamespaceDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_102501190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1025013a0(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025011f8; end: 1025011ff; -[_TtC31LensNamespaceDeepLinkProcessing30LensNamespaceDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1025011f8(void)

{
  return 0;
}



/* Entry: 102501200; end: 102501293; -[_TtC31LensNamespaceDeepLinkProcessing30LensNamespaceDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_102501200(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  FUN_102501294();
  puVar1 = &UNK_110519d98;
  func_0x000107c613f8(&UNK_110519d98,param_1,0,0);
  *param_1 = 1;
  func_0x000107c615f0(in_x4);
  puVar2 = puVar1;
  func_0x000107c5ed2c(puVar1);
  func_0x000107c614ac(puVar1);
  puVar1 = puVar2;
  func_0x000107c5ed2c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c42808(in_x4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(in_x4);
  return;
}



/* Entry: 102501294; end: 1025012d3;  */

void FUN_102501294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea2be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab5000;
  func_0x000107c61520(&UNK_10dab5000,&UNK_110519d98);
  puRam0000000112ea2be0 = puVar1;
  return;
}



/* Entry: 1025012d4; end: 10250139f;  */

/* WARNING: Possible PIC construction at 0x000102501354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102501358) */

void FUN_1025012d4(char param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 == '\0') {
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
  }
  else {
    puVar1 = PTR_PTR_1126ae6c0;
    func_0x000107c61168(PTR_PTR_1126ae6c0);
    uVar2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c094(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c03e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1025013a0; end: 10250151f;  */

/* WARNING: Possible PIC construction at 0x0001025014f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025014f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025013a0(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  
  func_0x000107c614f0();
  puVar2 = param_1;
  FUN_102501abc();
  if (param_2 != (undefined1 *)0x0) {
    FUN_102501bf8();
    if (((uint)param_1 & 0xff) != 2) {
      FUN_1025012d4();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea2bb0);
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea2bb0))[1];
      puVar3 = (undefined *)(unaff_x20 + _DAT_112ea2ba8);
      func_0x000107c61618();
      if (puVar3 == (undefined *)0x0) {
LAB_1025014b0:
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = puVar3;
        func_0x000107c61150();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000107c615e8(puVar3);
          goto LAB_1025014b0;
        }
        puVar5 = puVar3;
        func_0x000107c5dff4(puVar3);
        func_0x000107c61180();
        func_0x000107c615e8(puVar3);
      }
      func_0x000107c614f0(uVar4);
      (**(code **)(lVar1 + 8))(puVar5,puVar2,param_2,param_1,0,0,uVar4,lVar1);
      func_0x000107c6142c(param_2);
      goto LAB_1025014f0;
    }
    func_0x000107c6142c();
    puVar2 = param_2;
  }
  FUN_102501294();
  puVar3 = &UNK_110519d98;
  func_0x000107c613f8(&UNK_110519d98,puVar2,0,0);
  *puVar2 = 0;
  puVar5 = puVar3;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar3);
  func_0x000107c5ed2c(puVar5);
LAB_1025014f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 102501520; end: 102501687;  */

int FUN_102501520(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10250159c;
        goto LAB_102501580;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102501580:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10250159c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102501688; end: 1025016c7;  */

void FUN_102501688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea2be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab4fd8;
  func_0x000107c61520(&UNK_10dab4fd8,&UNK_110519d98);
  puRam0000000112ea2be8 = puVar1;
  return;
}



/* Entry: 1025016c8; end: 1025017bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025016c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea2bf0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea2bf8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025017c0; end: 10250181f; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin init] */

void FUN_1025017c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensNamespaceDeepLinkProcessing.LensNamespaceDeepLinkProcessorPlugin",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025017ec);
  (*pcVar1)();
}



/* Entry: 102501820; end: 10250185b; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102501820(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea2bf0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea2bf8));
  return;
}



/* Entry: 10250185c; end: 1025018bb; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin identifier] */

void FUN_10250185c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uVar1 = 0x112ea2c00;
  uStack_28 = param_1;
  func_0x0001000285a8(0x112ea2c00,&UNK_10dab5040);
  puVar2 = &uStack_28;
  func_0x000107c5fb18(puVar2,uVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1025018bc; end: 1025018c3; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin priority] */

undefined8 FUN_1025018bc(void)

{
  return 1000;
}



/* Entry: 1025018c4; end: 102501957; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_1025018c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = (uint)param_3;
  if (lRam0000000112ea2ba0 != -1) {
    func_0x000107c61568(0x112ea2ba0,FUN_102500e88);
  }
  uVar2 = param_2;
  func_0x000107c5fb1c();
  func_0x0001000f66f0();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}



/* Entry: 102501958; end: 10250199f; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin isValidDeepLink:] */

uint FUN_102501958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  func_0x000107c615f0(param_3);
  func_0x000102501db0(uVar1);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1025019a0; end: 102501a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1025019a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_40;
  long lStack_38;
  
  (**(code **)(unaff_x20 + _DAT_112ea2bf0))();
  lVar3 = _DAT_112ea2bf8;
  lVar4 = 0;
  FUN_102501170();
  uVar8 = ((undefined8 *)(unaff_x20 + lVar3))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ea2ba8;
  func_0x000107c61614(lVar5 + _DAT_112ea2ba8,0);
  func_0x000107c61604(lVar5 + lVar3,param_1);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ea2bb0);
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar7);
  plVar6 = &lStack_40;
  func_0x000107c61154(plVar6,puVar2);
  func_0x000107c615e8(param_1);
  return plVar6;
}



/* Entry: 102501a68; end: 102501a87;  */

void FUN_102501a68(void)

{
  func_0x000107c61168(&PTR_PTR_11284aa18);
  return;
}



/* Entry: 102501a88; end: 102501abb; -[_TtC31LensNamespaceDeepLinkProcessing36LensNamespaceDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_102501a88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1025019a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102501abc; end: 102501bf7;  */

void FUN_102501abc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong unaff_x20;
  
  lVar6 = 0;
  while( true ) {
    uVar3 = unaff_x20;
    func_0x000107c4e438();
    func_0x000107c61180();
    if (uVar3 == 0) {
      return;
    }
    uVar4 = uVar3;
    func_0x000107c5faec();
    uVar5 = param_2;
    func_0x000107c61170(uVar3);
    if (uVar4 == 0x63617073656d616e && param_2 == 0xe900000000000065) break;
    uVar5 = param_2;
    func_0x000107c605b8(uVar4,param_2,0x63617073656d616e,0xe900000000000065,0);
    func_0x000107c6142c(param_2);
    if ((uVar4 & 1) != 0) goto LAB_102501b74;
    bVar2 = lVar6 == -1;
    lVar6 = lVar6 + 1;
    param_2 = uVar5;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102501b6c);
      (*pcVar1)();
    }
  }
  func_0x000107c6142c(param_2);
LAB_102501b74:
  if (lVar6 != -1) {
    func_0x000107c4e438();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar3 = unaff_x20;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x20);
      uVar3 = uVar3 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar3 = uVar5 >> 0x38 & 0xf;
      }
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar5);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102501bf8);
  (*pcVar1)();
}



/* Entry: 102501bf8; end: 102501e77;  */

undefined4 FUN_102501bf8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  long unaff_x20;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar1 = PTR___sypN_11034f1a8;
  lVar3 = unaff_x20;
  func_0x000107c5f9e8();
  func_0x000107c61170(unaff_x20);
  uStack_88 = 0x7079745f77656976;
  uStack_80 = 0xe900000000000065;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    puVar4 = auStack_78;
    func_0x000100df95d0(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar3 + 0x38) + (long)puVar4 * 0x20,&uStack_50);
      func_0x000107c6142c(lVar3);
      goto LAB_102501ccc;
    }
    func_0x000107c6142c(lVar3);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_102501ccc:
  func_0x000107c6142c(lVar3);
  func_0x0001007bbff0(auStack_78);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    puVar5 = &uStack_88;
    func_0x000107c6147c(puVar5,&uStack_50,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_80;
    if (((ulong)puVar5 & 1) != 0) {
      uVar7 = uStack_88 & 0xffffffffffff;
      if ((uStack_80 & 0x2000000000000000) != 0) {
        uVar7 = uStack_80 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        uVar7 = uStack_80;
        func_0x000107c5fb1c(uStack_88,uStack_80);
        func_0x000107c6142c(uVar2);
        lVar3 = 0x112d3cde0;
        func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
        func_0x000107c61538();
        func_0x000107c604c4();
        func_0x000107c6142c(uVar7);
        uVar8 = 1;
        if (lVar3 != 1) {
          uVar8 = 2;
        }
        if (lVar3 == 0) {
          return 0;
        }
        return uVar8;
      }
      func_0x000107c6142c(uStack_80);
    }
  }
  return 0;
}



/* Entry: 102501e78; end: 102501f1b;  */

void FUN_102501e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea2c88,&UNK_10dab50b0);
  puVar1 = &UNK_110519e98;
  func_0x000107c613fc(&UNK_110519e98,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102501f1c,puVar1);
  return;
}



/* Entry: 102501f1c; end: 1025020c7;  */

void FUN_102501f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar5 = uStack_58;
  uVar1 = uStack_58;
  func_0x000107c4b2ec(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&uStack_58);
  uVar5 = uStack_58;
  uVar2 = uStack_58;
  func_0x000107c4b464(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&uStack_58);
  uVar5 = uStack_58;
  uVar3 = uStack_58;
  func_0x000107c400d4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a7740);
  uVar5 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 == 0) {
    puVar6 = PTR_PTR_1126aa9a0;
    func_0x000107c610f8();
    func_0x000107c47e48();
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000100083b20(&uStack_58);
    uVar5 = uStack_58;
    func_0x000107c4d80c(uStack_58);
    func_0x000107c61180();
    func_0x000107c61170(uStack_58);
    puVar6 = PTR_PTR_1126aa9a8;
    func_0x000107c610f8();
    func_0x000107c47e4c();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar2 = uVar1;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar6;
  return;
}



/* Entry: 1025020c8; end: 102502107;  */

undefined ** FUN_1025020c8(void)

{
  return &PTR_DAT_112ecc758;
}



/* Entry: 102502108; end: 102502163; -[_TtC26LensUnlockFlowServicesImpl30LensSocialUnlockDeepLinkPolicy canUnlockDeepLinkURL:] */

uint FUN_102502108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1025021f4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102502164; end: 10250219f; -[_TtC26LensUnlockFlowServicesImpl30LensSocialUnlockDeepLinkPolicy init] */

void FUN_102502164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025021a0; end: 1025021f3;  */

void FUN_1025021a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025021f4; end: 1025023d7;  */

uint FUN_1025021f4(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f83778);
    lVar5 = param_2;
  }
  else {
    ppuVar1 = param_1;
    func_0x000107c5faec();
    lVar6 = param_2;
    func_0x000107c61170(param_1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f83778;
    func_0x000107c5faec();
    lVar5 = lVar6;
    if (param_2 != 0) {
      if (ppuVar1 == ppuVar2 && param_2 == lVar6) {
        func_0x000107c6142c(lVar6);
        lVar5 = lVar6;
LAB_1025022d8:
        puVar3 = PTR_PTR_1126b6330;
        func_0x000107c61168();
        func_0x000107c5d280();
        if (puVar3 != (undefined *)0x2) goto LAB_1025022f4;
      }
      else {
        ppuVar2 = ppuVar1;
        lVar5 = param_2;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar6);
        if (((ulong)ppuVar2 & 1) != 0) goto LAB_1025022d8;
LAB_1025022f4:
        ppuVar2 = &PTR____CFConstantStringClassReference_110f838b8;
        func_0x000107c5faec();
        if (ppuVar1 == ppuVar2 && param_2 == lVar5) {
          func_0x000107c6142c(param_2);
          uVar7 = 1;
          goto LAB_102502358;
        }
        ppuVar4 = ppuVar1;
        lVar6 = param_2;
        func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar5,0);
        func_0x000107c6142c(lVar5);
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110f83a78;
          lVar5 = lVar6;
          func_0x000107c5faec();
          if ((ppuVar1 == ppuVar2) && (param_2 == lVar5)) {
            func_0x000107c6142c(param_2);
            uVar7 = 1;
          }
          else {
            func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar5,0);
            uVar7 = (uint)ppuVar1;
            func_0x000107c6142c(param_2);
          }
          goto LAB_102502358;
        }
      }
      uVar7 = 1;
      lVar5 = param_2;
      goto LAB_102502358;
    }
  }
  func_0x000107c6142c(lVar5);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f838b8);
  func_0x000107c6142c(lVar5);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f83a78);
  uVar7 = 0;
LAB_102502358:
  func_0x000107c6142c(lVar5);
  return uVar7 & 1;
}



/* Entry: 1025023d8; end: 102502583;  */

void FUN_1025023d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11051a038;
  func_0x000107c613fc(&UNK_11051a038,0x70,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  *(undefined8 *)(puVar2 + 0x58) = param_11;
  *(undefined8 *)(puVar2 + 0x60) = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_13;
  pcStack_70 = FUN_1025029ac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1025029e8;
  puStack_78 = &UNK_11051a050;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x00010037aadc(0);
  func_0x000107c610f8();
  func_0x000102503b2c();
  *param_1 = puVar1;
  return;
}



/* Entry: 102502584; end: 1025025bf;  */

void FUN_102502584(void)

{
  long unaff_x20;
  
  FUN_1025023d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1025025c0; end: 1025025cf;  */

undefined1  [16] FUN_1025025c0(void)

{
  return ZEXT816(0x11051a018);
}



/* Entry: 1025025d0; end: 1025029ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025025d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  uVar2 = auStack_70[0];
  uVar1 = 0x112e48e78;
  func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_70);
  uVar2 = auStack_70[0];
  uVar1 = 0x112e48e80;
  func_0x0001000285a8(0x112e48e80,&UNK_10dab51c0);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_70);
  uVar2 = auStack_70[0];
  uVar1 = 0x112ea2ce8;
  func_0x0001000285a8(0x112ea2ce8,&UNK_10db185d0);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_70);
  uVar1 = auStack_70[0];
  func_0x000107c5ce38();
  func_0x000107c61180();
  func_0x000107c61170(auStack_70[0]);
  func_0x000100083b20(&lStack_78);
  uVar11 = *(undefined8 *)(lStack_78 + _DAT_113081210);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_78);
  uVar2 = uVar11;
  func_0x000107c3f05c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar11);
  func_0x000100083b20(&uStack_80);
  uVar11 = uStack_80;
  func_0x000107c4b3c0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&uStack_88);
  uVar6 = uStack_88;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c61170(uStack_88);
  func_0x000100083b20(&uStack_90);
  uVar7 = uStack_90;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(uStack_90);
  func_0x000100083b20(&lStack_98);
  uVar8 = *(undefined8 *)(lStack_98 + _DAT_11306fa68);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  func_0x000100083b20(&lStack_a0);
  uVar12 = *(undefined8 *)(lStack_a0 + _DAT_11306fa40);
  func_0x000107c6157c(uVar12);
  func_0x000107c61170(lStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  lVar9 = 0;
  FUN_102502fe0();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112ea2cf0) = uVar1;
  *(undefined8 *)(lVar10 + _DAT_112ea2cf8) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112ea2d00) = uVar11;
  *(undefined8 *)(lVar10 + _DAT_112ea2d08) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112ea2d10) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112ea2d18) = uVar8;
  *(undefined8 *)(lVar10 + _DAT_112ea2d20) = uVar12;
  *(undefined **)(lVar10 + _DAT_112ea2d28) = puVar3;
  *(undefined8 *)(lVar10 + _DAT_112ea2d30) = uStack_a8;
  *(undefined **)(lVar10 + _DAT_112ea2d38) = puVar4;
  *(undefined8 *)(lVar10 + _DAT_112ea2d40) = uStack_b0;
  *(undefined **)(lVar10 + _DAT_112ea2d48) = puVar5;
  *(undefined8 *)(lVar10 + _DAT_112ea2d50) = uStack_b8;
  lStack_c8 = lVar10;
  lStack_c0 = lVar9;
  func_0x000107c61154(&lStack_c8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025029ac; end: 1025029e7;  */

void FUN_1025029ac(void)

{
  long unaff_x20;
  
  FUN_1025025d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1025029e8; end: 102502a1f;  */

void FUN_1025029e8(long param_1)

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



/* Entry: 102502a20; end: 102502a3b;  */

void FUN_102502a20(long param_1,long param_2)

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



/* Entry: 102502a3c; end: 102502d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102502a3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d28);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d30);
  puVar3 = &UNK_11051a0d8;
  func_0x000107c613fc(&UNK_11051a0d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10250303c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1024fdf20;
  puStack_88 = &UNK_11051a0f0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d38);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d40);
  puVar3 = &UNK_11051a128;
  func_0x000107c613fc(&UNK_11051a128,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  uStack_80 = 0x102503048;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x102503094;
  puStack_88 = &UNK_11051a140;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ea2cf0);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ea2cf8);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d48);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d50);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d00);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d08);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d10);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d18);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea2d20);
  lVar6 = 0;
  FUN_1025031e0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x000107c61614(lVar7 + _DAT_112ea2dd8,0);
  *(undefined8 *)(lVar7 + _DAT_112ea2de0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112ea2d80) = uVar12;
  *(undefined **)(lVar7 + _DAT_112ea2d88) = puVar2;
  *(undefined **)(lVar7 + _DAT_112ea2d90) = puVar5;
  *(undefined8 *)(lVar7 + _DAT_112ea2d98) = uVar16;
  *(undefined8 *)(lVar7 + _DAT_112ea2da0) = uVar15;
  *(undefined8 *)(lVar7 + _DAT_112ea2da8) = uVar14;
  *(undefined8 *)(lVar7 + _DAT_112ea2db0) = uVar13;
  *(undefined8 *)(lVar7 + _DAT_112ea2db8) = uVar8;
  *(undefined8 *)(lVar7 + _DAT_112ea2dc0) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112ea2dc8) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112ea2dd0) = uVar9;
  puVar3 = PTR_s_init_1125d9248;
  lStack_b0 = lVar7;
  lStack_a8 = lVar6;
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_b0,puVar3);
  return;
}



/* Entry: 102502d80; end: 102502e5f; -[_TtC26LensUnlockFlowServicesImpl21LensUnlockFlowCreator createUnlockFlow] */

void FUN_102502d80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11051a088;
  func_0x000107c613fc(&UNK_11051a088,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_40 = FUN_102503000;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x102503090;
  puStack_48 = &UNK_11051a0a0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102502e60; end: 102502e97;  */

void FUN_102502e60(long param_1)

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



/* Entry: 102502e98; end: 102502ef7; -[_TtC26LensUnlockFlowServicesImpl21LensUnlockFlowCreator init] */

void FUN_102502e98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensUnlockFlowServicesImpl.LensUnlockFlowCreator",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102502ec4);
  (*pcVar1)();
}



/* Entry: 102502ef8; end: 102502fdf; -[_TtC26LensUnlockFlowServicesImpl21LensUnlockFlowCreator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102502f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102502f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102502f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102502f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102502fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102502fc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102502fa8) */
/* WARNING: Removing unreachable block (ram,0x000102502f88) */
/* WARNING: Removing unreachable block (ram,0x000102502f58) */
/* WARNING: Removing unreachable block (ram,0x000102502f38) */
/* WARNING: Removing unreachable block (ram,0x000102502f18) */
/* WARNING: Removing unreachable block (ram,0x000102502fc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102502ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2cf0));
  return;
}



/* Entry: 102502fe0; end: 102502fff;  */

void FUN_102502fe0(void)

{
  func_0x000107c61168(&PTR_PTR_11284ab90);
  return;
}



/* Entry: 102503000; end: 10250301f;  */

void FUN_102503000(void)

{
  FUN_102502a3c();
  return;
}



/* Entry: 102503020; end: 102503053;  */

void FUN_102503020(long param_1,long param_2)

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



/* Entry: 102503054; end: 10250307f;  */

void FUN_102503054(undefined8 *param_1)

{
  func_0x000107c610f8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c025fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102503080; end: 102503097;  */

void FUN_102503080(long param_1,long param_2)

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



/* Entry: 102503098; end: 1025030f7; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl init] */

void FUN_102503098(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensUnlockFlowServicesImpl.LensUnlockFlowImpl",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025030c4);
  (*pcVar1)();
}



/* Entry: 1025030f8; end: 1025031df; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102503114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102503134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102503154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102503174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102503194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102503178) */
/* WARNING: Removing unreachable block (ram,0x000102503158) */
/* WARNING: Removing unreachable block (ram,0x000102503138) */
/* WARNING: Removing unreachable block (ram,0x000102503118) */
/* WARNING: Removing unreachable block (ram,0x000102503198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025030f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2d80));
  return;
}



/* Entry: 1025031e0; end: 1025031ff;  */

void FUN_1025031e0(void)

{
  func_0x000107c61168(&PTR_PTR_11284acb0);
  return;
}



/* Entry: 102503200; end: 1025034bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102503200(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  lVar2 = _DAT_112ea2dd8;
  lVar3 = unaff_x20 + _DAT_112ea2dd8;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar13 = *(ulong *)(param_3 + _DAT_112ea2e90);
    uVar4 = uVar13;
    FUN_1025034bc();
    FUN_1025034e0();
    puVar5 = PTR_PTR_1126b1068;
    func_0x000107c610f8(PTR_PTR_1126b1068);
    puVar6 = puVar5;
    func_0x000107c5ed90();
    func_0x000107c48fe4(puVar5);
    func_0x000107c61170(puVar6);
    uVar7 = 0;
    func_0x0001025021d4(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar8 = uVar4;
    func_0x000107c5adc4();
    lVar3 = _DAT_112ea2de0;
    if ((int)uVar8 != 0) {
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ea2de0);
      *(ulong *)(unaff_x20 + _DAT_112ea2de0) = uVar4;
      func_0x000107c61174();
      func_0x000107c61170(uVar14);
      lVar9 = 0;
      FUN_102503970();
      lVar10 = lVar9;
      func_0x000107c610f8();
      *(long *)(lVar10 + _DAT_112ea2e10) = unaff_x20;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112ea2e18);
      *puVar1 = param_4;
      puVar1[1] = param_5;
      puVar6 = PTR_s_init_1125d9248;
      lStack_70 = lVar10;
      lStack_68 = lVar9;
      func_0x000107c61174();
      func_0x000107c6157c(param_5);
      plVar11 = &lStack_70;
      func_0x000107c61154(plVar11,puVar6);
      func_0x000107c61604(unaff_x20 + lVar2);
      puVar6 = PTR_PTR_1126cacd8;
      func_0x000107c610f8();
      func_0x000107c45538();
      puVar12 = PTR_PTR_1126b1010;
      func_0x000107c610f8();
      func_0x000107c479e4();
      func_0x000107c59174();
      if (puVar12 != (undefined *)0x0) {
        FUN_10250360c(uVar13);
        func_0x000107c571e4(puVar12);
      }
      uVar8 = uVar4;
      func_0x000107c5bc08();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
      if ((uVar8 & 1) == 0) {
        func_0x000107c61170(plVar11);
        uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
        *(undefined8 *)(unaff_x20 + lVar3) = 0;
        func_0x000107c61170(uVar7);
        func_0x000107c61604(unaff_x20 + lVar2,0);
        return (long *)0x0;
      }
      return plVar11;
    }
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170();
  return (long *)0x0;
}



/* Entry: 1025034bc; end: 1025034df;  */

undefined8 FUN_1025034bc(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return *(undefined8 *)(&UNK_10dab5208 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1025034e0; end: 10250360b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025034e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea2dc8);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001003a5b88();
  puVar3 = PTR_PTR_1126b5c38;
  func_0x000107c610f8(PTR_PTR_1126b5c38);
  func_0x000107c4741c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 10250360c; end: 10250362f;  */

undefined8 FUN_10250360c(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return *(undefined8 *)(&UNK_10dab5270 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 102503630; end: 10250375b; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl openCameraWithLensURL:fromViewController:configuration:onDismiss:] */

void FUN_102503630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar4,param_3);
  puVar2 = &UNK_11051a178;
  func_0x000107c613fc(&UNK_11051a178,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  puVar3 = puVar4;
  FUN_102503200(puVar4,param_4,param_5,FUN_1025038c8,puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10250375c; end: 10250375f; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl socialUnlockFlowWillPresentModalContent:] */

void FUN_10250375c(void)

{
  return;
}



/* Entry: 102503760; end: 1025037c7; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl socialUnlockFlowDidDismissModalContent:error:] */

/* WARNING: Possible PIC construction at 0x0001025037b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025037b4) */

void FUN_102503760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  FUN_102503808(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025037c8; end: 102503807; -[_TtC26LensUnlockFlowServicesImpl18LensUnlockFlowImpl socialUnlockFlow:willDismissContextCardsWithCompletion:] */

void FUN_1025037c8(void)

{
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    (**(code **)(in_x3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 102503808; end: 1025038c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503808(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = _DAT_112ea2de0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ea2de0);
  puVar3 = PTR_PTR_1126b5c38;
  func_0x000107c61168(PTR_PTR_1126b5c38);
  func_0x000107c6148c(param_1,puVar3);
  if (lVar5 == 0) {
    if (param_1 != 0) {
      return;
    }
  }
  else if (param_1 == 0 || lVar5 != param_1) {
    return;
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(lVar5);
  lVar4 = unaff_x20 + _DAT_112ea2dd8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  pcVar1 = *(code **)(lVar4 + _DAT_112ea2e18);
  uVar2 = ((undefined8 *)(lVar4 + _DAT_112ea2e18))[1];
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar4);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1025038c8; end: 1025038d3;  */

void FUN_1025038c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001025038d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1025038d4; end: 102503933; -[_TtC26LensUnlockFlowServicesImpl25LensUnlockFlowSessionImpl init] */

void FUN_1025038d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensUnlockFlowServicesImpl.LensUnlockFlowSessionImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102503900);
  (*pcVar1)();
}



/* Entry: 102503934; end: 10250396f; -[_TtC26LensUnlockFlowServicesImpl25LensUnlockFlowSessionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503934(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2e10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea2e18 + 8));
  return;
}



/* Entry: 102503970; end: 10250398f;  */

void FUN_102503970(void)

{
  func_0x000107c61168(&PTR_PTR_11284add0);
  return;
}



/* Entry: 102503990; end: 102503acf;  */

void FUN_102503990(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11051a248;
  if (lRam0000000112ea2e48 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ea2e48 = param_1;
  }
  return;
}



/* Entry: 102503ad0; end: 102503adf; -[LensUnlockFlowCreationServices unlockFlowCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea2e58));
  return;
}



/* Entry: 102503ae0; end: 102503b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503ae0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2e58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102503b78; end: 102503bd7; -[LensUnlockFlowCreationServices init] */

void FUN_102503b78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensUnlockFlowServices.LensUnlockFlowCreationServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102503ba4);
  (*pcVar1)();
}



/* Entry: 102503bd8; end: 102503be7; -[LensUnlockFlowCreationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2e58));
  return;
}



/* Entry: 102503be8; end: 102503bf7; -[SCLensUnlockFlowConfiguration lensType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102503be8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea2e88);
}



/* Entry: 102503bf8; end: 102503c07; -[SCLensUnlockFlowConfiguration activationSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102503bf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea2e90);
}



/* Entry: 102503c08; end: 102503c17; -[SCLensUnlockFlowConfiguration shouldPreselectLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102503c08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ea2e98);
}



/* Entry: 102503c18; end: 102503c2b; -[SCLensUnlockFlowConfiguration cameraNavigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102503c18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea2ea0);
}



/* Entry: 102503c2c; end: 102503d43; -[SCLensUnlockFlowConfiguration initWithLensType:activationSource:shouldPreselectLens:cameraNavigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ea2e88) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ea2e90) = param_4;
  *(undefined1 *)(param_1 + _DAT_112ea2e98) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ea2ea0) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102503d44; end: 102503d47; -[SCLensUnlockFlowConfiguration copyWithZone:] */

void FUN_102503d44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102503d48; end: 102503d63; -[SCLensUnlockFlowConfiguration description] */

void FUN_102503d48(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102503d64; end: 102503dff; -[SCLensUnlockFlowConfiguration init] */

void FUN_102503d64(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "LensUnlockFlowServices/LensUnlockFlowConfigurationWrapper.swift",0x3f,2,0x38,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102503dac);
  (*pcVar1)();
}



/* Entry: 102503e00; end: 102503e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102503e00(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2e88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2e90) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ea2e98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2ea0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102503e04; end: 102503e4f;  */

void FUN_102503e04(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102503e50,param_1);
  return;
}



/* Entry: 102503e50; end: 102503ec7;  */

void FUN_102503e50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4f598(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126aa9b0;
  func_0x000107c610f8();
  func_0x000107c473d8();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102503ec8; end: 102503f07;  */

undefined ** FUN_102503ec8(void)

{
  return &PTR_DAT_112f2d890;
}



/* Entry: 102503f08; end: 102503fc3;  */

/* WARNING: Possible PIC construction at 0x000102503fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102503fa4) */

void FUN_102503f08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11051a4b8;
  func_0x000107c613fc(&UNK_11051a4b8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ea2f00;
  func_0x0001000285a8(0x112ea2f00,&UNK_10dab5500);
  func_0x000107c613fc();
  pcVar4 = FUN_102504008;
  func_0x0001000841fc(FUN_102504008,puVar2,uVar3);
  func_0x000100084214(&UNK_10dab54d0,0x2f,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102503fc4; end: 102503fd3;  */

undefined1  [16] FUN_102503fc4(void)

{
  return ZEXT816(0x11051a498);
}



/* Entry: 102503fd4; end: 102504007;  */

void FUN_102503fd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102504008; end: 1025040cb;  */

void FUN_102504008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  puVar2 = &uStack_c0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_50 = param_2[0xe];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  func_0x0001000285a8(0x112ea2f08,&UNK_10dab5508);
  func_0x0001000838ec(&uStack_c0);
  FUN_102504510(uVar3,uVar1,uVar4,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000100082720("ComposerEmbeddedMapViewBinderEntryPointProvider",0x2f,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1025040cc; end: 102504297;  */

/* WARNING: Possible PIC construction at 0x0001025041e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025041f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102504270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102504264) */
/* WARNING: Removing unreachable block (ram,0x000102504254) */
/* WARNING: Removing unreachable block (ram,0x000102504244) */
/* WARNING: Removing unreachable block (ram,0x000102504234) */
/* WARNING: Removing unreachable block (ram,0x000102504224) */
/* WARNING: Removing unreachable block (ram,0x000102504214) */
/* WARNING: Removing unreachable block (ram,0x000102504204) */
/* WARNING: Removing unreachable block (ram,0x0001025041f4) */
/* WARNING: Removing unreachable block (ram,0x0001025041e4) */
/* WARNING: Removing unreachable block (ram,0x000102504274) */

void FUN_1025040cc(undefined8 *param_1)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar20 = &UNK_11051a5b0;
  func_0x000107c613fc(&UNK_11051a5b0,0xb0,7);
  *(undefined8 *)(puVar20 + 0x10) = uVar1;
  *(undefined8 *)(puVar20 + 0x18) = uVar10;
  *(undefined8 *)(puVar20 + 0x20) = uVar21;
  *(undefined8 *)(puVar20 + 0x28) = uVar11;
  *(undefined8 *)(puVar20 + 0x30) = uVar2;
  *(undefined8 *)(puVar20 + 0x38) = uVar12;
  *(undefined8 *)(puVar20 + 0x40) = uVar3;
  *(undefined8 *)(puVar20 + 0x48) = uVar13;
  *(undefined8 *)(puVar20 + 0x50) = uVar4;
  *(undefined8 *)(puVar20 + 0x58) = uVar14;
  *(undefined8 *)(puVar20 + 0x60) = uVar5;
  *(undefined8 *)(puVar20 + 0x68) = uVar15;
  *(undefined8 *)(puVar20 + 0x70) = uVar6;
  *(undefined8 *)(puVar20 + 0x78) = uVar16;
  *(undefined8 *)(puVar20 + 0x80) = uVar7;
  *(undefined8 *)(puVar20 + 0x88) = uVar17;
  *(undefined8 *)(puVar20 + 0x90) = uVar8;
  *(undefined8 *)(puVar20 + 0x98) = uVar18;
  *(undefined8 *)(puVar20 + 0xa0) = uVar9;
  *(undefined8 *)(puVar20 + 0xa8) = uVar19;
  uVar21 = 0x112ea2f18;
  func_0x0001000285a8(0x112ea2f18,&UNK_10dab5548);
  func_0x000107c613fc();
  pcVar22 = FUN_102504364;
  func_0x0001000841fc(FUN_102504364,puVar20,uVar21);
  func_0x000100084214(&UNK_10dab5520,0x27,2);
  *param_1 = pcVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102504298; end: 1025042a7;  */

undefined1  [16] FUN_102504298(void)

{
  return ZEXT816(0x11051a590);
}



/* Entry: 1025042a8; end: 102504363;  */

void FUN_1025042a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102504364; end: 10250450f;  */

void FUN_102504364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_70 [2];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar19 = *param_2;
  func_0x0001000285a8(0x112ea2f20,&UNK_10dab5550);
  puVar15 = auStack_70;
  auStack_70[0] = uVar19;
  func_0x0001000838ec();
  uVar19 = uVar1;
  FUN_102509d24(uVar1,uVar18,uVar2);
  func_0x000100082720("EmbeddedMapViewS2RProviderServiceProvider",0x29,2);
  FUN_102509f04(uVar16,uVar18,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar22,uVar23,uVar20,uVar21,
                uVar6,uVar12);
  func_0x000100082720("MapSDKDataBridgeProviderServiceProvider",0x27,2);
  puVar17 = puVar15;
  func_0x00010254ef74(puVar15,uVar7);
  func_0x000100082720("EmbeddedMapDataBridgeScopedFactoryServiceProvider",0x31,2);
  FUN_1025087e4(uVar18,uVar13,uVar8,puVar15,uVar16,uVar19,uVar1,uVar14,puVar17);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(puVar15);
  func_0x000100082720("EmbeddedMapViewEntryPointProvider",0x21,2);
  *param_1 = uVar18;
  return;
}



/* Entry: 102504510; end: 1025045b3;  */

void FUN_102504510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea2f28,&UNK_10dab5560);
  puVar1 = &UNK_11051a660;
  func_0x000107c613fc(&UNK_11051a660,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10250472c,puVar1);
  return;
}



/* Entry: 1025045b4; end: 10250472b;  */

void FUN_1025045b4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_160);
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_60 = uStack_f0;
  uStack_c8 = uStack_158;
  uStack_d0 = uStack_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  FUN_102507e1c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  uVar2 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = uVar2;
  *(undefined1 *)(lVar1 + 0xd0) = 1;
  *(undefined8 *)(lVar1 + 0xd8) = 0x4031000000000000;
  uVar2 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0x101) = 0;
  *(undefined8 *)(lVar1 + 0xf9) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar1 + 0x120) = uVar2;
  *(undefined8 *)(lVar1 + 0x90) = uStack_e0;
  *(undefined8 *)(lVar1 + 0x98) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x58) = uStack_88;
  *(undefined8 *)(lVar1 + 0x50) = uStack_90;
  *(undefined8 *)(lVar1 + 0x68) = uStack_78;
  *(undefined8 *)(lVar1 + 0x60) = uStack_80;
  *(undefined8 *)(lVar1 + 0x78) = uStack_68;
  *(undefined8 *)(lVar1 + 0x70) = uStack_70;
  *(undefined8 *)(lVar1 + 0x80) = uStack_60;
  *(undefined8 *)(lVar1 + 0x88) = uStack_e8;
  *(undefined8 *)(lVar1 + 0x18) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x10) = uStack_d0;
  *(undefined8 *)(lVar1 + 0x28) = uStack_b8;
  *(undefined8 *)(lVar1 + 0x20) = uStack_c0;
  *(undefined8 *)(lVar1 + 0x38) = uStack_a8;
  *(undefined8 *)(lVar1 + 0x30) = uStack_b0;
  *(undefined8 *)(lVar1 + 0x48) = uStack_98;
  *(undefined8 *)(lVar1 + 0x40) = uStack_a0;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11051a718;
  *param_1 = lVar1;
  return;
}



/* Entry: 10250472c; end: 102504737;  */

void FUN_10250472c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_d8,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_160);
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_60 = uStack_f0;
  uStack_c8 = uStack_158;
  uStack_d0 = uStack_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  FUN_102507e1c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  uVar3 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = uVar3;
  *(undefined1 *)(lVar2 + 0xd0) = 1;
  *(undefined8 *)(lVar2 + 0xd8) = 0x4031000000000000;
  uVar3 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  *(undefined8 *)(lVar2 + 0x101) = 0;
  *(undefined8 *)(lVar2 + 0xf9) = 0;
  *(undefined8 *)(lVar2 + 0x110) = 0;
  *(undefined8 *)(lVar2 + 0x118) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x120) = uVar3;
  *(undefined8 *)(lVar2 + 0x90) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x98) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x58) = uStack_88;
  *(undefined8 *)(lVar2 + 0x50) = uStack_90;
  *(undefined8 *)(lVar2 + 0x68) = uStack_78;
  *(undefined8 *)(lVar2 + 0x60) = uStack_80;
  *(undefined8 *)(lVar2 + 0x78) = uStack_68;
  *(undefined8 *)(lVar2 + 0x70) = uStack_70;
  *(undefined8 *)(lVar2 + 0x80) = uStack_60;
  *(undefined8 *)(lVar2 + 0x88) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x18) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x10) = uStack_d0;
  *(undefined8 *)(lVar2 + 0x28) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x20) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x38) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x30) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x40) = uStack_a0;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11051a718;
  *param_1 = lVar2;
  return;
}



/* Entry: 102504738; end: 10250482b;  */

long FUN_102504738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar1;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0x4031000000000000;
  uVar1 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x101) = 0;
  *(undefined8 *)(unaff_x20 + 0xf9) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  *(undefined8 *)(unaff_x20 + 0x98) = param_1;
  uVar1 = param_4[8];
  uVar3 = param_4[0xb];
  uVar2 = param_4[10];
  *(undefined8 *)(unaff_x20 + 0x58) = param_4[9];
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
  uVar1 = param_4[0xc];
  *(undefined8 *)(unaff_x20 + 0x78) = param_4[0xd];
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_4[0xe];
  *(undefined8 *)(unaff_x20 + 0x88) = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x20 + 0x18) = param_4[1];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  uVar1 = param_4[4];
  uVar3 = param_4[7];
  uVar2 = param_4[6];
  *(undefined8 *)(unaff_x20 + 0x38) = param_4[5];
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 10250482c; end: 102504aaf;  */

void FUN_10250482c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar3 = &puStack_80;
  uStack_60 = 0x1025087e0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f11710;
  puStack_68 = &UNK_11051a678;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  uStack_60 = 0x1025087dc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f10508;
  puStack_68 = &UNK_11051a6a0;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  uVar4 = 0;
  FUN_102509cb8(0);
  func_0x000107c614e8();
  func_0x000107c4fcd4(param_1,param_2,ppuVar2,ppuVar3,uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102504ab0; end: 10250510b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102504ab0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long unaff_x20;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_102507d64();
  func_0x000107c613fc();
  param_1[3] = 3;
  param_1[2] = 1;
  lVar19 = *(long *)(unaff_x20 + 0xb8);
  param_1[4] = lVar19;
  lVar17 = *(long *)(unaff_x20 + 0x30);
  if (lVar17 == 0) {
    func_0x000107c6157c(lVar19);
  }
  else {
    func_0x000107c61580(lVar17,2);
    func_0x000107c6157c(lVar19);
    plVar5 = (long *)0x1;
    FUN_102507eb4(1,2,1,param_1);
    *(undefined8 *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10) = 2;
    *(long *)(((ulong)plVar5 & 0xffffffffffffff8) + 0x28) = lVar17;
    func_0x000107c61574(lVar17);
    param_1 = plVar5;
  }
  func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
  plVar6 = param_1;
  func_0x0001000c19f0();
  plVar5 = *(long **)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000100343d2c(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar18);
  func_0x00010297c83c(plVar5,uVar18,uVar20,uVar4);
  uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x88) + _DAT_112ed0d38);
  plStack_78 = plVar5;
  func_0x000107c6157c(uVar18);
  func_0x00010008a7c8(&uStack_68,&plStack_78);
  func_0x000107c61574(uVar18);
  func_0x000100083b20(&plStack_78);
  func_0x000107c61574(uStack_68);
  plVar10 = plStack_78;
  uVar18 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(long **)(unaff_x20 + 0xf0) = plStack_78;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_70;
  plVar7 = plStack_78;
  func_0x000107c61174();
  func_0x000107c61170(uVar18);
  if (plVar10 == (long *)0x0) {
    plVar7 = (long *)PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    func_0x000107c6142c(param_1);
    func_0x000107c61574(plVar6);
    func_0x000107c61170(plVar5);
  }
  else {
    puVar8 = &UNK_11051aad0;
    func_0x000107c613fc(&UNK_11051aad0,0x11,7);
    puVar8[0x10] = 1;
    puVar9 = &UNK_11051aaf8;
    func_0x000107c613fc(&UNK_11051aaf8,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(long **)(puVar9 + 0x18) = plVar7;
    *(undefined8 *)(puVar9 + 0x20) = uStack_70;
    pcVar21 = *(code **)(*plVar6 + 0x60);
    func_0x000107c61174();
    func_0x000107c6157c(puVar8);
    uVar18 = 0x1025085d4;
    puVar14 = puVar9;
    (*pcVar21)(0x1025085d4);
    func_0x000107c61574(puVar9);
    uVar20 = uVar18;
    func_0x000107c614f0(uVar18);
    uVar23 = *(undefined8 *)(unaff_x20 + 0x120);
    (**(code **)(puVar14 + 0x10))(uVar23,uVar20,puVar14);
    func_0x000107c615e8(uVar18);
    func_0x0001000285a8(0x112ea31c0,&UNK_10dab5688);
    plVar10 = plVar7;
    func_0x000107c4c458();
    func_0x000107c61180();
    plVar11 = plVar10;
    func_0x000107c5df90();
    func_0x000107c61180();
    func_0x000107c615e8(plVar10);
    plVar10 = plVar11;
    func_0x0001000b637c();
    func_0x000107c61170(plVar11);
    puVar9 = &UNK_11051ab20;
    func_0x000107c613fc(&UNK_11051ab20,0x28,7);
    *(long *)(puVar9 + 0x10) = unaff_x20;
    *(long **)(puVar9 + 0x18) = plVar7;
    *(undefined8 *)(puVar9 + 0x20) = uStack_70;
    pcVar22 = *(code **)(*plVar10 + 0x60);
    func_0x000107c61174();
    func_0x000107c6157c();
    pcVar21 = FUN_10250860c;
    puVar14 = puVar9;
    (*pcVar22)(FUN_10250860c);
    func_0x000107c61574(plVar10);
    func_0x000107c61574(puVar9);
    pcVar22 = pcVar21;
    func_0x000107c614f0(pcVar21);
    (**(code **)(puVar14 + 0x10))(uVar23,pcVar22,puVar14);
    func_0x000107c615e8(pcVar21);
    plVar10 = *(long **)(unaff_x20 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    if ((long)plVar10 < 0) {
      uVar24 = (ulong)plVar10 & 0x7fffffffffffffff;
      func_0x000107c6157c(uVar24);
      func_0x000107c61434(uVar18);
      func_0x000107c6157c(uVar3);
      plVar10 = plVar7;
      func_0x000107c51a88(plVar7);
      func_0x000107c61180();
      func_0x000107c54c94();
      func_0x000107c61170(plVar10);
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      plVar10 = plVar7;
      func_0x000107c4c3cc();
      func_0x000107c61180();
      plVar11 = plVar10;
      func_0x000107c4c3c8();
      func_0x000107c61180();
      func_0x000107c615e8(plVar10);
      plVar10 = plVar11;
      func_0x0001000b637c();
      func_0x000107c61170(plVar11);
      puVar9 = &UNK_11051a760;
      func_0x000107c613fc(&UNK_11051a760,0x18,7);
      func_0x000107c61644(puVar9 + 0x10);
      puVar14 = &UNK_11051ab48;
      func_0x000107c613fc(&UNK_11051ab48,0x20,7);
      *(undefined8 *)(puVar14 + 0x18) = uStack_70;
      func_0x000107c61614(puVar14 + 0x10,plVar7);
      puVar15 = &UNK_11051ab70;
      func_0x000107c613fc(&UNK_11051ab70,0x48,7);
      *(undefined **)(puVar15 + 0x10) = puVar9;
      *(undefined **)(puVar15 + 0x18) = puVar14;
      *(ulong *)(puVar15 + 0x20) = uVar24;
      *(undefined8 *)(puVar15 + 0x28) = uVar1;
      *(undefined8 *)(puVar15 + 0x30) = uVar18;
      *(undefined8 *)(puVar15 + 0x38) = uVar20;
      *(undefined8 *)(puVar15 + 0x40) = uVar3;
      pcVar21 = *(code **)(*plVar10 + 0x68);
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar14);
      func_0x000107c6157c(uVar24);
      func_0x000107c6157c(uVar3);
      uVar18 = 0x102508618;
      puVar16 = puVar15;
      (*pcVar21)(0x102508618);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar14);
      func_0x000107c61574(plVar10);
      func_0x000107c61574(puVar15);
      uVar20 = uVar18;
      func_0x000107c614f0(uVar18);
      (**(code **)(puVar16 + 0x10))(uVar23,uVar20,puVar16);
      func_0x000107c615e8(uVar18);
      plVar10 = plVar7;
      func_0x000107c3eca4(plVar7);
      func_0x000107c61180();
      func_0x000107c5519c();
      func_0x000107c61574(puVar8);
      func_0x000107c6142c(param_1);
      func_0x000107c615e8(plVar10);
      func_0x000107c61574(plVar6);
      func_0x000107c61170(plVar5);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(uVar24);
    }
    else {
      puVar9 = &UNK_11051ab98;
      func_0x000107c613fc(&UNK_11051ab98,0x20,7);
      *(long **)(puVar9 + 0x10) = plVar7;
      *(undefined8 *)(puVar9 + 0x18) = uStack_70;
      pcVar21 = *(code **)(*plVar10 + 0x60);
      func_0x000107c61174();
      FUN_102508634(plVar10,uVar1,uVar18,uVar2,uVar20,uVar3);
      uVar12 = 0x10250862c;
      puVar14 = puVar9;
      (*pcVar21)(0x10250862c);
      func_0x000107c61574(puVar9);
      uVar13 = uVar12;
      func_0x000107c614f0(uVar12);
      (**(code **)(puVar14 + 0x10))(uVar23,uVar13,puVar14);
      FUN_102507dcc(plVar10,uVar1,uVar18,uVar2,uVar20,uVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c6142c(param_1);
      func_0x000107c615e8(uVar12);
      func_0x000107c61574(plVar6);
      func_0x000107c61170(plVar5);
    }
  }
  return plVar7;
}



/* Entry: 10250510c; end: 1025055ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250510c(double *param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  
  dVar14 = *param_1;
  dVar12 = param_1[1];
  dVar16 = param_1[2];
  dVar11 = param_1[3];
  dVar19 = param_1[4];
  dVar18 = param_1[5];
  dVar17 = param_1[6];
  dVar20 = param_1[7];
  cVar1 = *(char *)(param_1 + 8);
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  bVar2 = *(byte *)(param_2 + 0x10);
  if (cVar1 == '\x01') {
    lVar4 = param_3;
    func_0x000107c4c458();
    func_0x000107c61180();
    lVar3 = lVar4;
    dVar10 = dVar11;
    func_0x000107c3f24c(dVar14,dVar12,dVar16,dVar11,dVar19,dVar18,dVar17,dVar20);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    dVar14 = (dVar14 + dVar16) * 0.5;
    dVar11 = dVar12 + dVar11;
    dVar12 = dVar11 * 0.5;
    func_0x000107c60a04(dVar14,dVar12);
    lVar4 = param_3;
    func_0x000107c3f140();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar4);
    if ((int)lVar5 == 0) {
      dVar11 = *(double *)(lVar3 + _DAT_112fed000);
      func_0x000107c4c458(param_3);
      func_0x000107c61180();
      if (dVar11 <= 0.0) {
LAB_102505594:
        func_0x000107c532c0(dVar14,dVar12,0,param_3);
      }
      else {
        func_0x000107c52fa4(param_3);
      }
LAB_102505598:
      func_0x000107c615e8(param_3);
      goto LAB_1025055a0;
    }
    puVar6 = PTR_PTR_1126c5ba8;
    func_0x000107c610f8(PTR_PTR_1126c5ba8);
    func_0x000107c470e4(dVar14,dVar12);
    lVar4 = _DAT_112fed000;
    dVar14 = *(double *)(lVar3 + _DAT_112fed000);
    if (dVar14 <= 0.0) {
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
    }
    else {
      uVar13 = *(undefined8 *)(lVar3 + _DAT_112fecff8);
      uVar15 = *(undefined8 *)(lVar3 + _DAT_112fecfe8);
      func_0x000107c438d4(param_3);
      func_0x000108d316c0(dVar14,uVar13,uVar15,dVar11,dVar10);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(dVar14);
    }
    puVar9 = PTR_PTR_1126d55f8;
    func_0x000107c610f8(PTR_PTR_1126d55f8);
    func_0x000107c49600();
    uVar13 = 0;
    if (*(double *)(lVar3 + lVar4) <= 0.0 && (bVar2 & 1) == 0) {
      uVar13 = 0;
      FUN_1025086e4(0,0x112ea31c8,&PTR_PTR_1126d5600);
      func_0x000103b328b4();
    }
    func_0x000107c3f140(param_3);
  }
  else {
    func_0x000107c438d4();
    dVar20 = dVar16;
    func_0x000108d31608(dVar16,dVar14);
    lVar3 = 0;
    func_0x000103b354c8();
    func_0x000107c610f8();
    func_0x000103b3520c(dVar14,dVar12,0,dVar11,dVar20,dVar19,dVar18,dVar17);
    lVar4 = param_3;
    func_0x000107c3f140();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar4);
    if ((int)lVar5 == 0) {
      dVar11 = *(double *)(lVar3 + _DAT_112fed000);
      func_0x000107c4c458(param_3);
      func_0x000107c61180();
      if (dVar11 <= 0.0) goto LAB_102505594;
      uVar13 = 0;
      if (bVar2 == 0) {
        uVar13 = 0x3fe0000000000000;
      }
      func_0x000107c52fa8(uVar13,param_3);
      goto LAB_102505598;
    }
    puVar6 = PTR_PTR_1126c5ba8;
    func_0x000107c610f8(PTR_PTR_1126c5ba8);
    func_0x000107c470e4(dVar14,dVar12);
    dVar14 = *(double *)(lVar3 + _DAT_112fed000);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    if (dVar14 <= 0.0) {
      func_0x000107c46ed0();
    }
    else {
      func_0x000107c466c0(dVar16);
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(puVar7);
    func_0x000107c466c0(dVar11,puVar8);
    puVar9 = PTR_PTR_1126d55f8;
    func_0x000107c610f8(PTR_PTR_1126d55f8);
    func_0x000107c49600();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    uVar13 = 0;
    if ((bVar2 & 1) == 0) {
      uVar13 = 0;
      FUN_1025086e4(0,0x112ea31c8,&PTR_PTR_1126d5600);
      func_0x000103b328b4();
    }
    func_0x000107c3f140(param_3);
  }
  func_0x000107c61180();
  func_0x000107c4d150();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(param_3);
LAB_1025055a0:
  func_0x000107c61170(lVar3);
  func_0x000107c61428(param_2 + 0x10,auStack_d0,1,0);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}


