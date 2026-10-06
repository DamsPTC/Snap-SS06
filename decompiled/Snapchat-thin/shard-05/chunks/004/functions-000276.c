/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103da8218; end: 103da8263;  */

undefined8 FUN_103da8218(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103da8c10(0);
  func_0x000107c613fc();
  uVar1 = uVar2;
  FUN_103da8674(uVar2);
  func_0x000107c61174(uVar2);
  return uVar1;
}



/* Entry: 103da8264; end: 103da8293;  */

void FUN_103da8264(long param_1,long param_2)

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



/* Entry: 103da8294; end: 103da84ab;  */

void FUN_103da8294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xeb00000000786564;
  uVar3 = 0x6e49646e65697266;
  if (cVar4 != '\x01') {
    uVar1 = 0xec000000746e756f;
    uVar3 = 0x4373646e65697266;
  }
  uVar2 = 0x6449646e65697266;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da84ac; end: 103da8587;  */

void FUN_103da84ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0xeb00000000786564;
  uVar3 = 0x6e49646e65697266;
  if (cVar4 != '\x01') {
    uVar1 = 0xec000000746e756f;
    uVar3 = 0x4373646e65697266;
  }
  uVar2 = 0x6449646e65697266;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103da8588; end: 103da85af;  */

void FUN_103da8588(undefined1 *param_1,undefined1 param_2)

{
  FUN_103da89fc();
  *param_1 = param_2;
  return;
}



/* Entry: 103da85b0; end: 103da85c7;  */

undefined1  [16] FUN_103da85b0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103da85c8; end: 103da8617;  */

void FUN_103da85c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103da8ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103da8618; end: 103da8643;  */

void FUN_103da8618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_103da8a60();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 103da8644; end: 103da8673;  */

void FUN_103da8644(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103da8674; end: 103da867f;  */

void FUN_103da8674(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103da8680; end: 103da8977;  */

/* WARNING: Removing unreachable block (ram,0x000103da8754) */

undefined * FUN_103da8680(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4b254();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1;
      func_0x000107c3eb80();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar2);
        uVar5 = 0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        uVar6 = uVar5;
        func_0x000103da8c30();
        func_0x000107c5eb1c(&puStack_98,&UNK_11070ec00,lVar4,param_2,&UNK_11070ec00,uVar6);
        func_0x000107c61574(uVar5);
        pcVar7 = "trackLensOptionSwiped(_:)";
        func_0x0001000c10c0("trackLensOptionSwiped(_:)");
        func_0x000107c61180();
        puVar8 = &UNK_11070eb30;
        func_0x000107c613fc(&UNK_11070eb30,0x18,7);
        func_0x000107c61644(puVar8 + 0x10);
        puVar9 = &UNK_11070eb58;
        func_0x000107c613fc(&UNK_11070eb58,0x40,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(long *)(puVar9 + 0x18) = lVar3;
        *(undefined8 *)(puVar9 + 0x28) = uStack_90;
        *(undefined **)(puVar9 + 0x20) = puStack_98;
        *(undefined **)(puVar9 + 0x30) = puStack_88;
        *(undefined **)(puVar9 + 0x38) = puStack_80;
        pcStack_78 = FUN_103da8c70;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_11070eb70;
        ppuVar10 = &puStack_98;
        puStack_70 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar8 = puStack_70;
        func_0x000107c615f0(lVar3);
        func_0x000107c61574(puVar8);
        func_0x000107c4e590(pcVar7);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(pcVar7);
        func_0x00010006c090(lVar4,param_2);
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar11 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar12 = puVar9;
    func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar9);
    func_0x000107c48368(puVar11);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar12);
    func_0x000107c4a8a4(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103da8978);
  (*pcVar1)();
}



/* Entry: 103da8978; end: 103da89d3; -[_TtC21AILensRemoteAPIPlugin29AILensOnFriendSelectedHandler handleRequest:] */

void FUN_103da8978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_103da8680(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103da89d4; end: 103da89d7; -[_TtC21AILensRemoteAPIPlugin29AILensOnFriendSelectedHandler reset] */

void FUN_103da89d4(void)

{
  return;
}



/* Entry: 103da89d8; end: 103da89fb;  */

void FUN_103da89d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103da89fc; end: 103da8a5f;  */

ulong FUN_103da89fc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103da8a60; end: 103da8c0f;  */

/* WARNING: Removing unreachable block (ram,0x000103da8ba0) */
/* WARNING: Removing unreachable block (ram,0x000103da8bf0) */
/* WARNING: Removing unreachable block (ram,0x000103da8b28) */

undefined1 * FUN_103da8a60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x1130096a8;
  func_0x0001000285a8(0x1130096a8,&UNK_10dc912e0);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_103da8ef8();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11070eca0,&UNK_11070eca0,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c60500(&uStack_52,lVar2);
    uStack_53 = 2;
    func_0x000107c60504(&uStack_53,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 103da8c10; end: 103da8c6f;  */

void FUN_103da8c10(void)

{
  func_0x000107c61168(&PTR_PTR_113009640);
  return;
}



/* Entry: 103da8c70; end: 103da8d43;  */

void FUN_103da8c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61574();
    puVar4 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c4b2dc(uVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 103da8d44; end: 103da8d5f;  */

void FUN_103da8d44(long param_1,long param_2)

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



/* Entry: 103da8d60; end: 103da8d8b;  */

long FUN_103da8d60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103da8d8c; end: 103da8d93;  */

void FUN_103da8d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103da8d94; end: 103da8dc7;  */

undefined8 * FUN_103da8d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103da8dc8; end: 103da8e23;  */

undefined8 * FUN_103da8dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 103da8e24; end: 103da8e5f;  */

undefined8 * FUN_103da8e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103da8e60; end: 103da8ef7;  */

int FUN_103da8e60(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103da8ef8; end: 103da8f37;  */

void FUN_103da8ef8(void)

{
  undefined *puVar1;
  
  if (puRam00000001135ddb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc913e4;
  func_0x000107c61520(&UNK_10dc913e4,&UNK_11070eca0);
  puRam00000001135ddb80 = puVar1;
  return;
}



/* Entry: 103da8f38; end: 103da909f;  */

int FUN_103da8f38(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103da8fb4;
        goto LAB_103da8f98;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103da8f98:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103da8fb4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103da90a0; end: 103da90df;  */

void FUN_103da90a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001135ddd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc913bc;
  func_0x000107c61520(&UNK_10dc913bc,&UNK_11070eca0);
  puRam00000001135ddd10 = puVar1;
  return;
}



/* Entry: 103da90e0; end: 103da90e3;  */

void FUN_103da90e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001135dde20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9131c;
  func_0x000107c61520(&UNK_10dc9131c,&UNK_11070eca0);
  puRam00000001135dde20 = puVar1;
  return;
}



/* Entry: 103da90e4; end: 103da9123;  */

void FUN_103da90e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001135dde20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9131c;
  func_0x000107c61520(&UNK_10dc9131c,&UNK_11070eca0);
  puRam00000001135dde20 = puVar1;
  return;
}



/* Entry: 103da9124; end: 103da9127;  */

void FUN_103da9124(void)

{
  undefined *puVar1;
  
  if (puRam00000001135dde28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc912f4;
  func_0x000107c61520(&UNK_10dc912f4,&UNK_11070eca0);
  puRam00000001135dde28 = puVar1;
  return;
}



/* Entry: 103da9128; end: 103da9167;  */

void FUN_103da9128(void)

{
  undefined *puVar1;
  
  if (puRam00000001135dde28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc912f4;
  func_0x000107c61520(&UNK_10dc912f4,&UNK_11070eca0);
  puRam00000001135dde28 = puVar1;
  return;
}



/* Entry: 103da9168; end: 103da933f;  */

void FUN_103da9168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x696a6f6d65;
  if (cVar4 != '\x01') {
    uVar1 = 0x796e61;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0xec00000072656b63;
  uVar5 = 0x6974735f70616e73;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da9340; end: 103da939b;  */

void FUN_103da9340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x696a6f6d65;
  if (cVar4 != '\x01') {
    uVar1 = 0x796e61;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0xec00000072656b63;
  uVar5 = 0x6974735f70616e73;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103da939c; end: 103da93f7;  */

void FUN_103da939c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000103daac8c();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 103da93f8; end: 103da9443;  */

void FUN_103da93f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103daac8c();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 103da9444; end: 103da94b7;  */

undefined1  [16] FUN_103da9444(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0xeb00000000657079;
  uVar3 = 0x5472656b63697473;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xef646574616d696e;
    uVar3 = 0x416564756c636e69;
  }
  uVar2 = 0xea00000000006d72;
  uVar4 = 0x6554686372616573;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 103da94b8; end: 103da94db;  */

void FUN_103da94b8(undefined1 *param_1,undefined1 param_2)

{
  func_0x000103da9e34();
  *param_1 = param_2;
  return;
}



/* Entry: 103da94dc; end: 103da94e7;  */

undefined1  [16] FUN_103da94dc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103da94e8; end: 103da9537;  */

void FUN_103da94e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103daaccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103da9538; end: 103da96a3;  */

void FUN_103da9538(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x1130097d8;
  func_0x0001000285a8(0x1130097d8,&UNK_10dc918d8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103daaccc();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11070f180,&UNK_11070f180,param_1,
                      uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = (undefined1)(param_4 & 0xffff);
    uStack_53 = 1;
    func_0x000103daa8b0();
    func_0x000107c60554(&uStack_52,&uStack_53,lVar3,&UNK_11070f0f0,param_2);
    uStack_54 = 2;
    func_0x000107c60540((param_4 & 0xffff) >> 8 & 1,&uStack_54,lVar3);
  }
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 103da96a4; end: 103da9817;  */

void FUN_103da96a4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113009760;
  uStack_68 = param_4;
  func_0x0001000285a8(0x113009760,&UNK_10dc91648);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103daa870();
  func_0x000107c606ec(auStack_70 + -extraout_x8,&UNK_11070f060,&UNK_11070f060,param_1,uVar1,uVar2);
  uStack_51 = 0;
  uVar4 = (ulong)(param_2 & 1);
  func_0x000107c60540(uVar4,&uStack_51,lVar3);
  uVar1 = uStack_68;
  if (unaff_x21 == 0) {
    uStack_52 = (undefined1)(param_2 >> 8);
    uStack_53 = 1;
    func_0x000103daa8b0();
    func_0x000107c60554(&uStack_52,&uStack_53,lVar3,&UNK_11070f0f0,uVar4);
    uStack_54 = 2;
    func_0x000107c6053c(param_3,uVar1,&uStack_54,lVar3);
  }
  (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar3);
  return;
}



/* Entry: 103da9818; end: 103da984b;  */

void FUN_103da9818(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  long unaff_x21;
  
  FUN_103da9f5c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    *(byte *)((long)param_1 + 0x11) = (byte)((ushort)param_4 >> 8) & 1;
  }
  return;
}



/* Entry: 103da984c; end: 103da987b;  */

void FUN_103da984c(undefined8 param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)((long)unaff_x20 + 0x11) == '\0') {
    uVar1 = 0;
  }
  FUN_103da9538(param_1,*unaff_x20,unaff_x20[1],uVar1 | *(byte *)(unaff_x20 + 2));
  return;
}



/* Entry: 103da987c; end: 103da98ff;  */

void FUN_103da987c(void)

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



/* Entry: 103da9900; end: 103da9967;  */

undefined1  [16] FUN_103da9900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xeb00000000657079;
  uVar2 = 0x5472656b63697473;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xea00000000006449;
    uVar2 = 0x656372756f736572;
  }
  uVar1 = 0xea00000000006465;
  uVar3 = 0x74616d696e417369;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 103da9968; end: 103da998b;  */

void FUN_103da9968(undefined1 *param_1,undefined1 param_2)

{
  FUN_103daa12c();
  *param_1 = param_2;
  return;
}



/* Entry: 103da998c; end: 103da9997;  */

undefined1  [16] FUN_103da998c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103da9998; end: 103da99e7;  */

void FUN_103da9998(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103daa870();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103da99e8; end: 103da9a1f;  */

void FUN_103da99e8(byte *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_103daa254();
  if (unaff_x21 == 0) {
    *param_1 = (byte)param_2 & 1;
    param_1[1] = (byte)((ushort)param_2 >> 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 103da9a20; end: 103da9a43;  */

void FUN_103da9a20(undefined8 param_1)

{
  undefined2 *unaff_x20;
  
  FUN_103da96a4(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Entry: 103da9a44; end: 103da9a4b;  */

undefined8 FUN_103da9a44(void)

{
  return 1;
}



/* Entry: 103da9a4c; end: 103da9aeb;  */

void FUN_103da9a4c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103da9aec; end: 103da9aff;  */

undefined1  [16] FUN_103da9aec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe500000000000000;
  auVar1._0_8_ = 0x736d657469;
  return auVar1;
}



/* Entry: 103da9b00; end: 103da9b7f;  */

void FUN_103da9b00(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x736d657469 && param_3 == -0x1b00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x736d657469,0xe500000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103da9b80; end: 103da9b97;  */

undefined1  [16] FUN_103da9b80(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103da9b98; end: 103da9be7;  */

void FUN_103da9b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103da9d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103da9be8; end: 103da9d0f;  */

void FUN_103da9be8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x113009720;
  func_0x0001000285a8(0x113009720,&UNK_10dc91440);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_103da9d10();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_11070ef48,&UNK_11070ef48,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  func_0x0001000285a8(0x113009730,&UNK_10dc91448);
  FUN_103daa930(0x113009738,0x103da9d50,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60554(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 103da9d10; end: 103da9d8f;  */

void FUN_103da9d10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc915f4;
  func_0x000107c61520(&UNK_10dc915f4,&UNK_11070ef48);
  puRam0000000113009728 = puVar1;
  return;
}



/* Entry: 103da9d90; end: 103da9db7;  */

void FUN_103da9d90(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_103daa3f4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103da9db8; end: 103da9dcf;  */

void FUN_103da9db8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103da9be8(param_1,*unaff_x20);
  return;
}



/* Entry: 103da9dd0; end: 103da9f5b;  */

ulong FUN_103da9dd0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103da9f5c; end: 103daa12b;  */

/* WARNING: Removing unreachable block (ram,0x000103daa0ac) */
/* WARNING: Removing unreachable block (ram,0x000103daa0fc) */
/* WARNING: Removing unreachable block (ram,0x000103daa024) */

undefined1  [16] FUN_103da9f5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x1130097c8;
  func_0x0001000285a8(0x1130097c8,&UNK_10dc918d0);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar3 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,lVar5);
  func_0x000103daaccc();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11070f180,&UNK_11070f180,lVar2,
                      lVar5,puVar3);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar5 = lVar1;
    func_0x000107c604f4(puVar3,lVar1);
    uStack_53 = 1;
    puVar4 = puVar3;
    func_0x000103daa8f0();
    func_0x000107c60508(&uStack_52,&UNK_11070f0f0,&uStack_53,lVar1,&UNK_11070f0f0,puVar4);
    uStack_54 = 2;
    func_0x000107c604f8(&uStack_54,lVar1);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = puVar3;
  return auVar7;
}



/* Entry: 103daa12c; end: 103daa253;  */

undefined4 FUN_103daa12c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x74616d696e417369;
  if (((param_1 == 0x74616d696e417369) && (param_2 == -0x15ffffffffff9b9b)) ||
     (func_0x000107c605b8(0x74616d696e417369,0xea00000000006465,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x5472656b63697473;
    if (((param_1 == 0x5472656b63697473) && (param_2 == -0x14ffffffff9a8f87)) ||
       (func_0x000107c605b8(0x5472656b63697473,0xeb00000000657079,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x656372756f736572) && (param_2 == -0x15ffffffffff9bb7)) {
        func_0x000107c6142c(0xea00000000006449);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x656372756f736572,0xea00000000006449,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 103daa254; end: 103daa3f3;  */

/* WARNING: Removing unreachable block (ram,0x000103daa384) */

void FUN_103daa254(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113009778;
  func_0x0001000285a8(0x113009778,&UNK_10dc91650);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103daa870();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11070f060,&UNK_11070f060,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    func_0x000107c604f8(puVar5,lVar3);
    uStack_53 = 1;
    func_0x000103daa8f0();
    func_0x000107c60508(&uStack_52,&UNK_11070f0f0,&uStack_53,lVar3,&UNK_11070f0f0,puVar5);
    uStack_54 = 2;
    func_0x000107c604f4(&uStack_54,lVar3);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return;
}



/* Entry: 103daa3f4; end: 103daa543;  */

long FUN_103daa3f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x113009788;
  func_0x0001000285a8(0x113009788,&UNK_10dc91658);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  FUN_103da9d10();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_11070ef48,&UNK_11070ef48,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x113009730;
    func_0x0001000285a8(0x113009730,&UNK_10dc91448);
    FUN_103daa930(0x113009790,FUN_103daa9a0,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 103daa544; end: 103daa55b;  */

undefined1  [16] FUN_103daa544(void)

{
  return ZEXT816(0x11070ee28);
}



/* Entry: 103daa55c; end: 103daa61f;  */

undefined2 * FUN_103daa55c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103daa620; end: 103daa7a7;  */

int FUN_103daa620(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103daa7a8; end: 103daa7e7;  */

void FUN_103daa7a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9157c;
  func_0x000107c61520(&UNK_10dc9157c,&UNK_11070ef48);
  puRam0000000113009748 = puVar1;
  return;
}



/* Entry: 103daa7e8; end: 103daa7eb;  */

void FUN_103daa7e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91514;
  func_0x000107c61520(&UNK_10dc91514,&UNK_11070ef48);
  puRam0000000113009750 = puVar1;
  return;
}



/* Entry: 103daa7ec; end: 103daa82b;  */

void FUN_103daa7ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91514;
  func_0x000107c61520(&UNK_10dc91514,&UNK_11070ef48);
  puRam0000000113009750 = puVar1;
  return;
}



/* Entry: 103daa82c; end: 103daa82f;  */

void FUN_103daa82c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc914ec;
  func_0x000107c61520(&UNK_10dc914ec,&UNK_11070ef48);
  puRam0000000113009758 = puVar1;
  return;
}



/* Entry: 103daa830; end: 103daa92f;  */

void FUN_103daa830(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc914ec;
  func_0x000107c61520(&UNK_10dc914ec,&UNK_11070ef48);
  puRam0000000113009758 = puVar1;
  return;
}



/* Entry: 103daa930; end: 103daa99f;  */

void FUN_103daa930(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x113009730;
    func_0x00010002969c(0x113009730,&UNK_10dc91448);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103daa9a0; end: 103daa9df;  */

void FUN_103daa9a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc915a4;
  func_0x000107c61520(&UNK_10dc915a4,&UNK_11070eea8);
  puRam0000000113009798 = puVar1;
  return;
}



/* Entry: 103daa9e0; end: 103daa9e7;  */

void FUN_103daa9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103daa9e8; end: 103daaa1b;  */

undefined8 * FUN_103daa9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103daaa1c; end: 103daaa77;  */

undefined8 * FUN_103daaa1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 103daaa78; end: 103daaabb;  */

undefined8 * FUN_103daaa78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 103daaabc; end: 103daab7f;  */

int FUN_103daaabc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103daab80; end: 103daabbf;  */

void FUN_103daab80(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91700;
  func_0x000107c61520(&UNK_10dc91700,&UNK_11070f0f0);
  puRam00000001130097a0 = puVar1;
  return;
}



/* Entry: 103daabc0; end: 103daabc3;  */

void FUN_103daabc0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc917b8;
  func_0x000107c61520(&UNK_10dc917b8,&UNK_11070f060);
  puRam00000001130097a8 = puVar1;
  return;
}



/* Entry: 103daabc4; end: 103daac03;  */

void FUN_103daabc4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc917b8;
  func_0x000107c61520(&UNK_10dc917b8,&UNK_11070f060);
  puRam00000001130097a8 = puVar1;
  return;
}



/* Entry: 103daac04; end: 103daac07;  */

void FUN_103daac04(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91750;
  func_0x000107c61520(&UNK_10dc91750,&UNK_11070f060);
  puRam00000001130097b0 = puVar1;
  return;
}



/* Entry: 103daac08; end: 103daac47;  */

void FUN_103daac08(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91750;
  func_0x000107c61520(&UNK_10dc91750,&UNK_11070f060);
  puRam00000001130097b0 = puVar1;
  return;
}



/* Entry: 103daac48; end: 103daac4b;  */

void FUN_103daac48(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91728;
  func_0x000107c61520(&UNK_10dc91728,&UNK_11070f060);
  puRam00000001130097b8 = puVar1;
  return;
}



/* Entry: 103daac4c; end: 103daad0b;  */

void FUN_103daac4c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130097b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91728;
  func_0x000107c61520(&UNK_10dc91728,&UNK_11070f060);
  puRam00000001130097b8 = puVar1;
  return;
}



/* Entry: 103daad0c; end: 103daae63;  */

int FUN_103daad0c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103daad88;
        goto LAB_103daad6c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103daad6c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103daad88:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103daae64; end: 103daaea3;  */

void FUN_103daae64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91978;
  func_0x000107c61520(&UNK_10dc91978,&UNK_11070f180);
  puRam0000000113009850 = puVar1;
  return;
}



/* Entry: 103daaea4; end: 103daaea7;  */

void FUN_103daaea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91910;
  func_0x000107c61520(&UNK_10dc91910,&UNK_11070f180);
  puRam0000000113009858 = puVar1;
  return;
}



/* Entry: 103daaea8; end: 103daaee7;  */

void FUN_103daaea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91910;
  func_0x000107c61520(&UNK_10dc91910,&UNK_11070f180);
  puRam0000000113009858 = puVar1;
  return;
}



/* Entry: 103daaee8; end: 103daaeeb;  */

void FUN_103daaee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc918e8;
  func_0x000107c61520(&UNK_10dc918e8,&UNK_11070f180);
  puRam0000000113009860 = puVar1;
  return;
}



/* Entry: 103daaeec; end: 103daaf2b;  */

void FUN_103daaeec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc918e8;
  func_0x000107c61520(&UNK_10dc918e8,&UNK_11070f180);
  puRam0000000113009860 = puVar1;
  return;
}



/* Entry: 103daaf2c; end: 103daaf97;  */

undefined1 FUN_103daaf2c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103daaf98; end: 103daafcf;  */

void FUN_103daaf98(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x18;
  func_0x0001044e4b78();
  uRam00000001138120f0 = uVar1;
  return;
}



/* Entry: 103daafd0; end: 103dab1a7;  */

void FUN_103daafd0(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000113009868 != -1) {
    func_0x000107c61568(0x113009868,FUN_103daaf98);
  }
  uVar4 = uRam00000001138120f0;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001138120f0;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab1a8);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    func_0x000100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_103dab13c;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab1a4);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_103dab13c:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001138120f8 = lVar3;
  return;
}



/* Entry: 103dab1a8; end: 103dab34b;  */

ulong FUN_103dab1a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab280);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab284);
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
  func_0x000107c5fb78(0xd000000000000011,0x800000010f1b7530);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab34c);
  (*pcVar2)();
}



/* Entry: 103dab34c; end: 103dab3c7;  */

long FUN_103dab34c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return unaff_x20;
}



/* Entry: 103dab3c8; end: 103dab5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dab3c8(code *param_1,code *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  if (lRam0000000113009868 != -1) {
    param_2 = FUN_103daaf98;
    func_0x000107c61568(0x113009868);
  }
  pcVar2 = (code *)(ulong)*(byte *)(lRam00000001138120f0 + _DAT_113080f70);
  func_0x0001044e388c();
  if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dab5f4);
    (*pcVar2)();
  }
  pcVar3 = param_1;
  pcVar6 = param_2;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  pcVar4 = pcVar3;
  func_0x000107c5faec();
  pcVar7 = pcVar6;
  func_0x000107c61170(pcVar3);
  if (pcVar2 == pcVar4 && param_2 == pcVar6) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar6);
  }
  else {
    pcVar7 = param_2;
    func_0x000107c605b8(pcVar2,param_2,pcVar4,pcVar6,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar6);
    if (((ulong)pcVar2 & 1) == 0) goto LAB_103dab510;
  }
  pcVar2 = param_1;
  func_0x000107c428b4(param_1);
  func_0x000107c61180();
  pcVar3 = pcVar2;
  func_0x000107c5faec();
  func_0x000107c61170(pcVar2);
  lVar5 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(pcVar7);
  pcVar7 = pcVar3;
  if (lVar5 == 0) {
    FUN_103dab5f4(param_1,puVar1);
    return puVar1;
  }
LAB_103dab510:
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(0xe000000000000000);
  pcVar2 = param_1;
  func_0x000107c428b4(param_1);
  func_0x000107c61180();
  pcVar3 = pcVar2;
  func_0x000107c5faec();
  func_0x000107c61170(pcVar2);
  func_0x000107c5fb78(pcVar3,pcVar7);
  func_0x000107c6142c(pcVar7);
  FUN_103dac9b4(param_1,5,puVar1,0xd000000000000011,0x800000010ef268a0);
  func_0x000107c6142c(0x800000010ef268a0);
  return puVar1;
}


