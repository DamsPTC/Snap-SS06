/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a1b5a8; end: 103a1b5ab;  */

void FUN_103a1b5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcab30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b540;
  func_0x000107c61520(&UNK_10dc3b540,&UNK_1106bf708);
  puRam0000000112fcab30 = puVar1;
  return;
}



/* Entry: 103a1b5ac; end: 103a1b5eb;  */

void FUN_103a1b5ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcab30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b540;
  func_0x000107c61520(&UNK_10dc3b540,&UNK_1106bf708);
  puRam0000000112fcab30 = puVar1;
  return;
}



/* Entry: 103a1b5ec; end: 103a1b923;  */

void FUN_103a1b5ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a1b924; end: 103a1bd37;  */

long FUN_103a1b924(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a1bd38; end: 103a1bd47; -[_TtC32SCLensPreviewConfiguringServices30LensPreviewConfiguringServices configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1bd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcab38));
  return;
}



/* Entry: 103a1bd48; end: 103a1bdfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1bd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcab38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab58) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab60) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1bdfc; end: 103a1be5b; -[_TtC32SCLensPreviewConfiguringServices30LensPreviewConfiguringServices init] */

void FUN_103a1bdfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPreviewConfiguringServices.LensPreviewConfiguringServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1be28);
  (*pcVar1)();
}



/* Entry: 103a1be5c; end: 103a1bed3; -[_TtC32SCLensPreviewConfiguringServices30LensPreviewConfiguringServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a1be88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a1bea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1be8c) */
/* WARNING: Removing unreachable block (ram,0x000103a1beac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1be5c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fcab38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcab40));
  return;
}



/* Entry: 103a1bed4; end: 103a1bee7;  */

bool FUN_103a1bed4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a1bee8; end: 103a1c09b;  */

void FUN_103a1bee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x7374616562;
  if (cVar4 != '\x01') {
    uVar3 = 0x68746f62;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x73636972796c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a1c09c; end: 103a1c0eb;  */

void FUN_103a1c09c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x7374616562;
  if (cVar4 != '\x01') {
    uVar3 = 0x68746f62;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x73636972796c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103a1c0ec; end: 103a1c14f;  */

ulong FUN_103a1c0ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103a1c150; end: 103a1c153;  */

void FUN_103a1c150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcab90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b6e0;
  func_0x000107c61520(&UNK_10dc3b6e0,&UNK_1106bfa38);
  puRam0000000112fcab90 = puVar1;
  return;
}



/* Entry: 103a1c154; end: 103a1c193;  */

void FUN_103a1c154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcab90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b6e0;
  func_0x000107c61520(&UNK_10dc3b6e0,&UNK_1106bfa38);
  puRam0000000112fcab90 = puVar1;
  return;
}



/* Entry: 103a1c194; end: 103a1c2f7;  */

int FUN_103a1c194(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a1c210;
        goto LAB_103a1c1f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a1c1f4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a1c210:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a1c2f8; end: 103a1c303; -[SCLensPreviewCaptionEvent text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c2f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcac08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcac08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1c304; end: 103a1c313; -[SCLensPreviewCaptionEvent normalizedY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a1c304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fcac10);
}



/* Entry: 103a1c314; end: 103a1c31f; -[SCLensPreviewCaptionEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcac18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcac18))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1c320; end: 103a1c367;  */

void FUN_103a1c320(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1c368; end: 103a1c3c3; -[SCLensPreviewCaptionEvent mentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c368(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fcac20);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103a1d158(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103a1c3c4; end: 103a1c467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac08);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcac10) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fcac20) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1c468; end: 103a1c547; -[SCLensPreviewCaptionEvent initWithText:normalizedY:lensId:mentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c468(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = param_3;
  func_0x000107c5faec();
  lVar3 = 0;
  if (param_6 != 0) {
    FUN_103a1d158();
    func_0x000107c5fc54(param_6,lVar3);
    lVar3 = param_6;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_112fcac08);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_112fcac10) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_112fcac18);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  *(long *)(param_2 + _DAT_112fcac20) = lVar3;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1c548; end: 103a1c577;  */

void FUN_103a1c548(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103a1c578(param_1);
  return;
}



/* Entry: 103a1c578; end: 103a1c77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c578(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lStack_b8;
  long lStack_b0;
  undefined *apuStack_a8 [2];
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_112fcac08);
  puVar13[1] = uStack_68;
  *puVar13 = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_112fcac10) = param_1[2];
  uStack_78 = param_1[4];
  uStack_80 = param_1[3];
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_112fcac18);
  puVar13[1] = uStack_78;
  *puVar13 = uStack_80;
  lVar10 = param_1[5];
  lStack_88 = lVar10;
  if (lVar10 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x10);
    if (lVar11 == 0) {
      FUN_103a1c928(&lStack_88);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000100402194(&uStack_70,apuStack_a8);
      func_0x000100402194(&uStack_80,apuStack_a8);
      apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103a1c90c(0,lVar11,0);
      puVar12 = apuStack_a8[0];
      lVar8 = 0;
      FUN_103a1d158();
      puVar13 = (undefined8 *)(lVar10 + 0x38);
      do {
        uVar2 = puVar13[-3];
        uVar5 = puVar13[-2];
        uVar3 = puVar13[-1];
        uVar6 = *puVar13;
        lVar10 = lVar8;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar10 + _DAT_112fcac58);
        *puVar1 = uVar2;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(lVar10 + _DAT_112fcac60);
        *puVar1 = uVar3;
        puVar1[1] = uVar6;
        puVar7 = PTR_s_init_1125d9248;
        lStack_b8 = lVar10;
        lStack_b0 = lVar8;
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        plVar9 = &lStack_b8;
        func_0x000107c61154(plVar9,puVar7);
        uVar4 = *(ulong *)(puVar12 + 0x10);
        apuStack_a8[0] = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar4) {
          func_0x000103a1c90c(1 < *(ulong *)(puVar12 + 0x18),uVar4 + 1,1);
        }
        puVar12 = apuStack_a8[0];
        puVar13 = puVar13 + 4;
        *(ulong *)(apuStack_a8[0] + 0x10) = uVar4 + 1;
        *(long **)(apuStack_a8[0] + uVar4 * 8 + 0x20) = plVar9;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      func_0x000100bcb1dc(&uStack_70);
      func_0x000100bcb1dc(&uStack_80);
      FUN_103a1c928(&lStack_88);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_112fcac20) = puVar12;
  func_0x000107c61154(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1c780; end: 103a1c783; -[SCLensPreviewCaptionEvent copyWithZone:] */

void FUN_103a1c780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a1c784; end: 103a1c7e3; -[SCLensPreviewCaptionEvent description] */

void FUN_103a1c784(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000107c61174();
  FUN_103a1cc30(&uStack_68);
  uStack_18 = uStack_60;
  uStack_20 = uStack_68;
  func_0x000100bcb1dc(&uStack_20);
  uStack_28 = uStack_48;
  uStack_30 = uStack_50;
  func_0x000100bcb1dc(&uStack_30);
  uStack_38 = uStack_40;
  FUN_103a1c928(&uStack_38);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a1c7e4; end: 103a1c85f; -[SCLensPreviewCaptionEvent init] */

void FUN_103a1c7e4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCLensPreviewConfiguringServices/LensPreviewCaptionEventWrapper.swift",0x45,2
                      ,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1c82c);
  (*pcVar1)();
}



/* Entry: 103a1c860; end: 103a1c8af; -[SCLensPreviewCaptionEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a1c880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1c884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1c860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcac08 + 8))
  ;
  return;
}



/* Entry: 103a1c8b0; end: 103a1c927;  */

void FUN_103a1c8b0(void)

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
    FUN_103a1d158();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fcac50;
  plVar5 = (long *)&UNK_10dc3b828;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103a1c928; end: 103a1c96f;  */

undefined8 FUN_103a1c928(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f571c8;
  func_0x0001000285a8(0x112f571c8,&UNK_10dbae7c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103a1c970; end: 103a1ca93;  */

undefined * FUN_103a1c970(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103a1ca94);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103a1c8b0();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103a1d158(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103a1ca94; end: 103a1cc2f;  */

ulong FUN_103a1ca94(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a1cb64);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a1cb68);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103a1d158(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    FUN_103a1d158(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f188a70);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103a1cc30);
  (*pcVar2)();
}



/* Entry: 103a1cc30; end: 103a1ceeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cc30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112fcac08);
  uVar6 = ((undefined8 *)(param_2 + _DAT_112fcac08))[1];
  uVar17 = *(undefined8 *)(param_2 + _DAT_112fcac10);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fcac18);
  uVar7 = ((undefined8 *)(param_2 + _DAT_112fcac18))[1];
  uVar14 = *(ulong *)(param_2 + _DAT_112fcac20);
  if (uVar14 == 0) {
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61170(param_2);
    puVar13 = (undefined *)0x0;
  }
  else {
    if (uVar14 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar16 = uVar14;
      if (-1 < (long)uVar14) {
        uVar16 = uVar14 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
    if (uVar16 == 0) {
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61170(param_2);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x0001010e2890(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x103a1ceec);
        (*pcVar10)();
      }
      if ((uVar14 & 0xc000000000000001) == 0) {
        plVar12 = (long *)(uVar14 + 0x20);
        do {
          puVar1 = (undefined8 *)(*plVar12 + _DAT_112fcac58);
          uVar4 = *puVar1;
          uVar8 = puVar1[1];
          puVar1 = (undefined8 *)(*plVar12 + _DAT_112fcac60);
          uVar5 = *puVar1;
          uVar9 = puVar1[1];
          uVar14 = *(ulong *)(puVar13 + 0x10);
          uVar15 = *(ulong *)(puVar13 + 0x18);
          func_0x000107c61434(uVar8);
          func_0x000107c61434(uVar9);
          if (uVar15 >> 1 <= uVar14) {
            func_0x0001010e2890(1 < uVar15,uVar14 + 1,1);
          }
          *(ulong *)(puVar13 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puVar13 + uVar14 * 0x20 + 0x20) = uVar4;
          *(undefined8 *)(puVar13 + uVar14 * 0x20 + 0x28) = uVar8;
          *(undefined8 *)(puVar13 + uVar14 * 0x20 + 0x30) = uVar5;
          *(undefined8 *)(puVar13 + uVar14 * 0x20 + 0x38) = uVar9;
          uVar16 = uVar16 - 1;
          plVar12 = plVar12 + 1;
        } while (uVar16 != 0);
      }
      else {
        uVar15 = 0;
        do {
          uVar11 = uVar15;
          FUN_103a1ca94(uVar15,uVar14);
          uVar4 = *(undefined8 *)(uVar11 + _DAT_112fcac58);
          uVar8 = ((undefined8 *)(uVar11 + _DAT_112fcac58))[1];
          uVar5 = *(undefined8 *)(uVar11 + _DAT_112fcac60);
          uVar9 = ((undefined8 *)(uVar11 + _DAT_112fcac60))[1];
          func_0x000107c61434(uVar8);
          func_0x000107c61434(uVar9);
          func_0x000107c615e8(uVar11);
          uVar11 = *(ulong *)(puVar13 + 0x10);
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar11) {
            func_0x0001010e2890(1 < *(ulong *)(puVar13 + 0x18),uVar11 + 1,1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(puVar13 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puVar13 + uVar11 * 0x20 + 0x20) = uVar4;
          *(undefined8 *)(puVar13 + uVar11 * 0x20 + 0x28) = uVar8;
          *(undefined8 *)(puVar13 + uVar11 * 0x20 + 0x30) = uVar5;
          *(undefined8 *)(puVar13 + uVar11 * 0x20 + 0x38) = uVar9;
        } while (uVar16 != uVar15);
      }
      func_0x000107c61170(param_2);
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar6;
  param_1[2] = uVar17;
  param_1[3] = uVar3;
  param_1[4] = uVar7;
  param_1[5] = puVar13;
  return;
}



/* Entry: 103a1ceec; end: 103a1cf0b;  */

void FUN_103a1ceec(void)

{
  func_0x000107c61168(&PTR_PTR_112913328);
  return;
}



/* Entry: 103a1cf0c; end: 103a1cf17; -[SCLensPreviewCaptionMention userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cf0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcac58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcac58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1cf18; end: 103a1cf23; -[SCLensPreviewCaptionMention username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cf18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcac60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcac60))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1cf24; end: 103a1cf6b;  */

void FUN_103a1cf24(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a1cf6c; end: 103a1cf6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1cf70; end: 103a1cfeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1cfec; end: 103a1d07b; -[SCLensPreviewCaptionMention initWithUserId:username:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1cfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcac58);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcac60);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1d07c; end: 103a1d07f; -[SCLensPreviewCaptionMention copyWithZone:] */

void FUN_103a1d07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a1d080; end: 103a1d09b; -[SCLensPreviewCaptionMention description] */

void FUN_103a1d080(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a1d09c; end: 103a1d117; -[SCLensPreviewCaptionMention init] */

void FUN_103a1d09c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCLensPreviewConfiguringServices/LensPreviewCaptionMentionWrapper.swift",0x47
                      ,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1d0e4);
  (*pcVar1)();
}



/* Entry: 103a1d118; end: 103a1d157; -[SCLensPreviewCaptionMention .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a1d138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1d13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcac58 + 8))
  ;
  return;
}



/* Entry: 103a1d158; end: 103a1d177;  */

void FUN_103a1d158(void)

{
  func_0x000107c61168(&PTR_PTR_112913408);
  return;
}



/* Entry: 103a1d178; end: 103a1d17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac58);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcac60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1d17c; end: 103a1d2eb;  */

uint FUN_103a1d17c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  uint unaff_w20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  func_0x000107c60188();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_103a1d600(param_1,auStack_88);
  uVar2 = 0x112fcac90;
  func_0x0001000285a8(0x112fcac90,&UNK_10dc3b900);
  puVar3 = puVar4;
  func_0x000107c6147c(puVar4,auStack_88,uVar2,param_2,6);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar4,1,1,param_2);
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    unaff_w20 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,param_2);
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,param_2);
    func_0x000107c5fab8();
    (**(code **)(lVar6 + 8))(lVar5,param_2);
  }
  return unaff_w20 & 1;
}



/* Entry: 103a1d2ec; end: 103a1d2f3;  */

uint FUN_103a1d2ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_d0 [40];
  char cStack_a8;
  undefined1 auStack_a0 [40];
  char cStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010101bc9c(param_1,auStack_d0);
  func_0x00010101bc9c(param_2,auStack_a0);
  if (cStack_a8 == '\0') {
    if (cStack_78 != '\0') goto LAB_103a1d398;
  }
  else if (cStack_a8 == '\x01') {
    if (cStack_78 != '\x01') {
LAB_103a1d398:
      func_0x0001000834e4(auStack_d0);
      func_0x00010101bb90(auStack_a0);
      uVar3 = 0;
      goto LAB_103a1d3ac;
    }
  }
  else if (cStack_78 != '\x02') goto LAB_103a1d398;
  func_0x000102ae015c(auStack_d0,auStack_48);
  func_0x000102ae015c(auStack_a0,auStack_70);
  puVar1 = auStack_48;
  func_0x0001000a8868(puVar1,uStack_30);
  puVar2 = auStack_70;
  FUN_103a1d17c(puVar2,uStack_30,uStack_28,puVar1);
  uVar3 = (uint)puVar2;
  func_0x0001000834e4(auStack_70);
  func_0x0001000834e4(auStack_48);
LAB_103a1d3ac:
  return uVar3 & 1;
}



/* Entry: 103a1d2f4; end: 103a1d3f7;  */

uint FUN_103a1d2f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_d0 [40];
  char cStack_a8;
  undefined1 auStack_a0 [40];
  char cStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010101bc9c(param_1,auStack_d0);
  func_0x00010101bc9c(param_2,auStack_a0);
  if (cStack_a8 == '\0') {
    if (cStack_78 != '\0') goto LAB_103a1d398;
  }
  else if (cStack_a8 == '\x01') {
    if (cStack_78 != '\x01') {
LAB_103a1d398:
      func_0x0001000834e4(auStack_d0);
      func_0x00010101bb90(auStack_a0);
      uVar3 = 0;
      goto LAB_103a1d3ac;
    }
  }
  else if (cStack_78 != '\x02') goto LAB_103a1d398;
  func_0x000102ae015c(auStack_d0,auStack_48);
  func_0x000102ae015c(auStack_a0,auStack_70);
  puVar1 = auStack_48;
  func_0x0001000a8868(puVar1,uStack_30);
  puVar2 = auStack_70;
  FUN_103a1d17c(puVar2,uStack_30,uStack_28,puVar1);
  uVar3 = (uint)puVar2;
  func_0x0001000834e4(auStack_70);
  func_0x0001000834e4(auStack_48);
LAB_103a1d3ac:
  return uVar3 & 1;
}



/* Entry: 103a1d3f8; end: 103a1d3fb;  */

void FUN_103a1d3f8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103a1d3fc; end: 103a1d44f;  */

long FUN_103a1d3fc(long param_1,char *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = param_2[0x28];
  if (2 < bVar1) {
    bVar1 = *param_2 + 3;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
  *(byte *)(param_1 + 0x28) = bVar1;
  return param_1;
}



/* Entry: 103a1d450; end: 103a1d4c7;  */

char * FUN_103a1d450(char *param_1,char *param_2)

{
  long lVar1;
  byte bVar2;
  
  if (param_1 != param_2) {
    func_0x0001000834e4(param_1);
    bVar2 = param_2[0x28];
    if (2 < bVar2) {
      bVar2 = *param_2 + 3;
    }
    lVar1 = *(long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
    param_1[0x28] = bVar2;
  }
  return param_1;
}



/* Entry: 103a1d4c8; end: 103a1d51f;  */

char * FUN_103a1d4c8(char *param_1,char *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    func_0x0001000834e4();
    bVar1 = param_2[0x28];
    if (2 < bVar1) {
      bVar1 = *param_2 + 3;
    }
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    param_1[0x28] = bVar1;
  }
  return param_1;
}



/* Entry: 103a1d520; end: 103a1d5ff;  */

int FUN_103a1d520(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 103a1d600; end: 103a1d6db;  */

long FUN_103a1d600(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103a1d6dc; end: 103a1d73b; -[_TtC35SnapEditorCTLensToolSessionServices42SnapEditorCTLensToolSessionManagerServices init] */

void FUN_103a1d6dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorCTLensToolSessionServices.SnapEditorCTLensToolSessionManagerServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1d708);
  (*pcVar1)();
}



/* Entry: 103a1d73c; end: 103a1d74b; -[_TtC35SnapEditorCTLensToolSessionServices42SnapEditorCTLensToolSessionManagerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcac98));
  return;
}



/* Entry: 103a1d74c; end: 103a1d76b;  */

void FUN_103a1d74c(void)

{
  func_0x000107c61168(&PTR_PTR_1129134d8);
  return;
}



/* Entry: 103a1d76c; end: 103a1d803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d76c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcacc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1d804; end: 103a1d863; -[_TtC35SnapEditorCTLensToolSessionServices43SnapEditorCTLensToolSessionProviderServices init] */

void FUN_103a1d804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorCTLensToolSessionServices.SnapEditorCTLensToolSessionProviderServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1d830);
  (*pcVar1)();
}



/* Entry: 103a1d864; end: 103a1d873; -[_TtC35SnapEditorCTLensToolSessionServices43SnapEditorCTLensToolSessionProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcacc8));
  return;
}



/* Entry: 103a1d874; end: 103a1d8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a1d874(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa2c98();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fcacf8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fcad00) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1d8fc);
  (*pcVar1)();
}



/* Entry: 103a1d8fc; end: 103a1d95b; -[_TtC37MapsActiveUserSessionScopeGraphBridge52MapsActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a1d8fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapsActiveUserSessionScopeGraphBridge.MapsActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1d928);
  (*pcVar1)();
}



/* Entry: 103a1d95c; end: 103a1d993; -[_TtC37MapsActiveUserSessionScopeGraphBridge52MapsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a1d978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1d97c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcacf8));
  return;
}



/* Entry: 103a1d994; end: 103a1d9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1d994(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fcad00),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fcacf8));
  return;
}



/* Entry: 103a1d9bc; end: 103a1da1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1d9bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1da20; end: 103a1da27;  */

void FUN_103a1da20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1da28; end: 103a1dac7;  */

void FUN_103a1da28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1dac8; end: 103a1dae7;  */

void FUN_103a1dac8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1dae8; end: 103a1db4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1dae8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1db4c; end: 103a1db53;  */

void FUN_103a1db4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1db54; end: 103a1dbf3;  */

void FUN_103a1db54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1dbf4; end: 103a1dc13;  */

void FUN_103a1dbf4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1dc14; end: 103a1dc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1dc14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1dc78; end: 103a1dc7f;  */

void FUN_103a1dc78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1dc80; end: 103a1dd1f;  */

void FUN_103a1dc80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1dd20; end: 103a1dd3f;  */

void FUN_103a1dd20(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1dd40; end: 103a1dda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1dd40(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1dda4; end: 103a1ddab;  */

void FUN_103a1dda4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1ddac; end: 103a1de4b;  */

void FUN_103a1ddac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1de4c; end: 103a1de6b;  */

void FUN_103a1de4c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1de6c; end: 103a1decf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1de6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1ded0; end: 103a1ded7;  */

void FUN_103a1ded0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1ded8; end: 103a1df77;  */

void FUN_103a1ded8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1df78; end: 103a1df97;  */

void FUN_103a1df78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1df98; end: 103a1dffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1df98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1dffc; end: 103a1e003;  */

void FUN_103a1dffc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1e004; end: 103a1e0a3;  */

void FUN_103a1e004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1e0a4; end: 103a1e0c3;  */

void FUN_103a1e0a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1e0c4; end: 103a1e127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1e0c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1e128; end: 103a1e12f;  */

void FUN_103a1e128(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1e130; end: 103a1e1cf;  */

void FUN_103a1e130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1e1d0; end: 103a1e1ef;  */

void FUN_103a1e1d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1e1f0; end: 103a1e253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1e1f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1e254; end: 103a1e25b;  */

void FUN_103a1e254(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1e25c; end: 103a1e2fb;  */

void FUN_103a1e25c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1e2fc; end: 103a1e31b;  */

void FUN_103a1e2fc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a1e31c; end: 103a1e37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a1e31c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fcbe90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a1e380; end: 103a1e387;  */

void FUN_103a1e380(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a1e388; end: 103a1e427;  */

void FUN_103a1e388(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


