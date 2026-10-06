/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0015e688; end: 0015e783;  */

undefined8 FUN_0015e688(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x001869f8();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 0015e784; end: 0015e7cf;  */

void FUN_0015e784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 0015e7d0; end: 0015e8cb;  */

undefined1  [16] FUN_0015e7d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,&UNK_0000ad70);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = FUN_0015e8cc;
  return auVar14;
}



/* Entry: 0015e8cc; end: 0015e8cf;  */

void FUN_0015e8cc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    FUN_00116294(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                 *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
    *(undefined8 *)(lVar2 + 0x28) = uVar10;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x00186a24(puVar1 + 4,puVar1 + 8);
    FUN_00116294(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    *(undefined8 *)(lVar2 + 0x38) = uVar5;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    func_0x00186a58(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(puVar1);
  return;
}



/* Entry: 0015e8d0; end: 0015e96f;  */

bool FUN_0015e8d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
  }
  else {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00116294(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 0015e970; end: 0015e993;  */

void FUN_0015e970(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 0015e994; end: 0015e99b;  */

void FUN_0015e994(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*unaff_x20);
  return;
}



/* Entry: 0015e99c; end: 0015e9c3;  */

void FUN_0015e99c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0015e9c4; end: 0015e9d7;  */

undefined8 FUN_0015e9c4(void)

{
  return 0x15e9d4;
}



/* Entry: 0015e9d8; end: 0015ea07;  */

undefined1  [16] FUN_0015e9d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0015ea08; end: 0015ea3b;  */

void FUN_0015ea08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0015ea3c; end: 0015ea57;  */

undefined1  [16] FUN_0015ea3c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x15ea4c;
  return auVar1;
}



/* Entry: 0015ea58; end: 0015ea7f;  */

void FUN_0015ea58(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015ea80; end: 0015ea9b;  */

undefined1  [16] FUN_0015ea80(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15ea90;
  return auVar1;
}



/* Entry: 0015ea9c; end: 0015eac3;  */

void FUN_0015ea9c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015eac4; end: 0015ebff;  */

undefined1  [16] FUN_0015eac4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15ead4;
  return auVar1;
}



/* Entry: 0015ec00; end: 0015ecfb;  */

undefined1  [16] FUN_0015ec00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,&UNK_00002ad1);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = FUN_0015ecfc;
  return auVar14;
}



/* Entry: 0015ecfc; end: 0015ed03;  */

void FUN_0015ecfc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    FUN_00116294(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                 *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(undefined8 *)(lVar2 + 0x30) = uVar10;
    *(undefined8 *)(lVar2 + 0x28) = uVar8;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar10 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x00186a24(puVar1 + 4,puVar1 + 8);
    FUN_00116294(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    func_0x00186a58(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(puVar1);
  return;
}



/* Entry: 0015ed04; end: 0015eda7;  */

bool FUN_0015ed04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
  }
  else {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00116294(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 0015eda8; end: 0015edb3;  */

void FUN_0015eda8(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 0015edb4; end: 0015eddb;  */

void FUN_0015edb4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0015eddc; end: 0015edef;  */

undefined8 FUN_0015eddc(void)

{
  return 0x15edec;
}



/* Entry: 0015edf0; end: 0015ee1f;  */

undefined1  [16] FUN_0015edf0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0015ee20; end: 0015ee53;  */

void FUN_0015ee20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0015ee54; end: 0015ee6f;  */

undefined1  [16] FUN_0015ee54(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x15ee64;
  return auVar1;
}



/* Entry: 0015ee70; end: 0015ee97;  */

void FUN_0015ee70(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015ee98; end: 0015eeb3;  */

undefined1  [16] FUN_0015ee98(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15eea8;
  return auVar1;
}



/* Entry: 0015eeb4; end: 0015eedb;  */

void FUN_0015eeb4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015eedc; end: 0015ef3f;  */

undefined1  [16] FUN_0015eedc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15eeec;
  return auVar1;
}



/* Entry: 0015ef40; end: 0015f03b;  */

undefined8 FUN_0015ef40(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x001869f8();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 0015f03c; end: 0015f087;  */

void FUN_0015f03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 0015f088; end: 0015f227;  */

undefined1  [16] FUN_0015f088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,&UNK_000085dc);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = 0x1930f0;
  return auVar14;
}



/* Entry: 0015f228; end: 0015f24f;  */

void FUN_0015f228(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 0015f250; end: 0015f2af;  */

byte FUN_0015f250(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x48) & 1;
}



/* Entry: 0015f2b0; end: 0015f39b;  */

void FUN_0015f2b0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  bVar6 = *(long *)(unaff_x20 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar8 = 0xc;
  uVar7 = uVar8;
  if (bVar6) {
    uVar7 = (undefined1)*(undefined8 *)(unaff_x20 + 0x60);
  }
  if (bVar6) {
    uVar8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(unaff_x20 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x78);
  }
  FUN_00186ff8();
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((long)param_1 + 0x11) = uVar8;
  param_1[3] = uVar4;
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}



/* Entry: 0015f39c; end: 0015f44b;  */

undefined1  [16] FUN_0015f39c(undefined8 *param_1)

{
  undefined1 uVar1;
  qword qVar2;
  qword qVar3;
  qword qVar4;
  long lVar5;
  bool bVar6;
  qword *pqVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  pqVar7 = &segment_command_00000020.vmaddr;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,&UNK_0000be9a);
  }
  *param_1 = pqVar7;
  pqVar7[6] = unaff_x20;
  bVar6 = *(long *)(unaff_x20 + 0x70) != 1;
  qVar2 = 0;
  if (bVar6) {
    qVar2 = *(qword *)(unaff_x20 + 0x50);
  }
  qVar3 = 0xc000000000000000;
  if (bVar6) {
    qVar3 = *(qword *)(unaff_x20 + 0x58);
  }
  uVar9 = 0xc;
  uVar8 = uVar9;
  if (bVar6) {
    uVar8 = (undefined1)*(undefined8 *)(unaff_x20 + 0x60);
    uVar9 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x60) >> 8);
  }
  qVar4 = 0;
  if (bVar6) {
    qVar4 = *(qword *)(unaff_x20 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(unaff_x20 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x78);
  }
  *pqVar7 = qVar2;
  pqVar7[1] = qVar3;
  *(undefined1 *)(pqVar7 + 2) = uVar8;
  *(undefined1 *)((long)pqVar7 + 0x11) = uVar9;
  pqVar7[3] = qVar4;
  pqVar7[4] = lVar5;
  *(undefined1 *)(pqVar7 + 5) = uVar1;
  FUN_00186ff8();
  auVar10._8_8_ = pqVar7;
  auVar10._0_8_ = FUN_0015f44c;
  return auVar10;
}



/* Entry: 0015f44c; end: 0015f563;  */

void FUN_0015f44c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = (undefined8 *)*param_1;
  lVar11 = param_1[6];
  uVar12 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar8 = *(undefined1 *)(param_1 + 5);
  uVar10 = *(ushort *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar11 + 0x50);
  uVar6 = *(undefined8 *)(lVar11 + 0x58);
  uVar3 = *(undefined8 *)(lVar11 + 0x60);
  uVar7 = *(undefined8 *)(lVar11 + 0x68);
  uVar13 = *(undefined8 *)(lVar11 + 0x70);
  uVar9 = *(undefined1 *)(lVar11 + 0x78);
  if ((param_2 & 1) == 0) {
    FUN_00116310(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
  }
  else {
    func_0x00023304(uVar12,uVar4);
    _swift_bridgeObjectRetain(uVar5);
    FUN_00116310(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
    uVar12 = param_1[4];
    FUN_00023358(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 0015f564; end: 0015f637;  */

bool FUN_0015f564(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_58 = (undefined1)*(undefined8 *)(unaff_x20 + 0x68);
  uStack_4f = (undefined7)*(undefined8 *)(unaff_x20 + 0x71);
  uStack_48 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x71) >> 0x38);
  uVar6 = uStack_48;
  uStack_57 = (undefined7)*(undefined8 *)(unaff_x20 + 0x69);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x69) >> 0x38);
  uVar5 = CONCAT71(uStack_57,uStack_58);
  lVar1 = CONCAT71(uStack_4f,uStack_50);
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  uStack_60 = uVar4;
  if (lVar1 == 1) {
    func_0x00187028(&uStack_70,auStack_a0,0xaf0aa8,&UNK_007db028);
  }
  else {
    func_0x00187028(&uStack_70,auStack_a0,0xaf0aa8,&UNK_007db028);
    FUN_00116310(uVar2,uVar3,uVar4,uVar5,lVar1,uVar6);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  FUN_00116310(uVar2,uVar3,uVar4,uVar5,1,uVar6);
  return lVar1 != 1;
}



/* Entry: 0015f638; end: 0015f66f;  */

void FUN_0015f638(void)

{
  long unaff_x20;
  
  FUN_00116310(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
               *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
               *(undefined8 *)(unaff_x20 + 0x70),*(undefined1 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 1;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  return;
}



/* Entry: 0015f670; end: 0015f677;  */

void FUN_0015f670(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*unaff_x20);
  return;
}



/* Entry: 0015f678; end: 0015f69f;  */

void FUN_0015f678(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0015f6a0; end: 0015f6b3;  */

undefined8 FUN_0015f6a0(void)

{
  return 0x15f6b0;
}



/* Entry: 0015f6b4; end: 0015f6e3;  */

undefined1  [16] FUN_0015f6b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0015f6e4; end: 0015f717;  */

void FUN_0015f6e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0015f718; end: 0015f733;  */

undefined1  [16] FUN_0015f718(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x15f728;
  return auVar1;
}



/* Entry: 0015f734; end: 0015f75b;  */

void FUN_0015f734(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015f75c; end: 0015f777;  */

undefined1  [16] FUN_0015f75c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15f76c;
  return auVar1;
}



/* Entry: 0015f778; end: 0015f79f;  */

void FUN_0015f778(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015f7a0; end: 0015f7b3;  */

undefined1  [16] FUN_0015f7a0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15f7b0;
  return auVar1;
}



/* Entry: 0015f7b4; end: 0015f8af;  */

undefined8 FUN_0015f7b4(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x001869f8();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 0015f8b0; end: 0015f8fb;  */

void FUN_0015f8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 0015f8fc; end: 0015f9f7;  */

undefined1  [16] FUN_0015f8fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x1056);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = 0x1930f4;
  return auVar14;
}



/* Entry: 0015f9f8; end: 0015faa3;  */

void FUN_0015f9f8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    FUN_00116294(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                 *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
    *(undefined8 *)(lVar2 + 0x28) = uVar10;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x00186a24(puVar1 + 4,puVar1 + 8);
    FUN_00116294(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    *(undefined8 *)(lVar2 + 0x38) = uVar5;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    func_0x00186a58(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(puVar1);
  return;
}



/* Entry: 0015faa4; end: 0015fb43;  */

bool FUN_0015faa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
  }
  else {
    func_0x00187028(&uStack_50,auStack_70,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_00116294(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 0015fb44; end: 0015fb67;  */

void FUN_0015fb44(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 0015fb68; end: 0015fbcf;  */

byte FUN_0015fb68(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x40) & 1;
}



/* Entry: 0015fbd0; end: 0015fbf7;  */

void FUN_0015fbd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0015fbf8; end: 0015fc0b;  */

undefined8 FUN_0015fbf8(void)

{
  return 0x15fc08;
}



/* Entry: 0015fc0c; end: 0015fc3b;  */

undefined1  [16] FUN_0015fc0c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0015fc3c; end: 0015fc6f;  */

void FUN_0015fc3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0015fc70; end: 0015fc8b;  */

undefined1  [16] FUN_0015fc70(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x15fc80;
  return auVar1;
}



/* Entry: 0015fc8c; end: 0015fcb3;  */

void FUN_0015fc8c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015fcb4; end: 0015fccf;  */

undefined1  [16] FUN_0015fcb4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15fcc4;
  return auVar1;
}



/* Entry: 0015fcd0; end: 0015fcf7;  */

void FUN_0015fcd0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 0015fcf8; end: 0015fd93;  */

undefined1  [16] FUN_0015fcf8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x15fd08;
  return auVar1;
}



/* Entry: 0015fd94; end: 0015fe8f;  */

undefined8 FUN_0015fd94(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x001869f8();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 0015fe90; end: 0015fedb;  */

void FUN_0015fe90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 0015fedc; end: 0015ffd7;  */

undefined1  [16] FUN_0015fedc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  section *psVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  psVar7 = &section_00000068;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,&UNK_000087bc);
  }
  *param_1 = psVar7;
  *(long *)psVar7[1].segname = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  cVar10 = '\x04';
  if (bVar6) {
    cVar10 = (char)uVar4;
  }
  *(undefined8 *)psVar7->sectname = uVar1;
  *(undefined8 *)(psVar7->sectname + 8) = uVar5;
  cVar8 = '\x03';
  cVar11 = cVar8;
  if (bVar6) {
    cVar11 = (char)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  *(undefined **)psVar7->segname = puVar2;
  if (bVar6) {
    cVar8 = (char)((ulong)uVar4 >> 0x10);
  }
  cVar9 = '\x03';
  cVar12 = cVar9;
  if (bVar6) {
    cVar12 = (char)((ulong)uVar4 >> 0x18);
  }
  psVar7->segname[8] = cVar10;
  cVar10 = cVar9;
  cVar13 = cVar9;
  if (bVar6) {
    cVar13 = (char)((ulong)uVar4 >> 0x20);
    cVar10 = (char)((ulong)uVar4 >> 0x28);
  }
  psVar7->segname[9] = cVar11;
  if (bVar6) {
    cVar9 = (char)((ulong)uVar4 >> 0x30);
  }
  psVar7->segname[10] = cVar8;
  cVar11 = '\x05';
  if (puVar3 != (undefined *)0x0) {
    cVar11 = (char)((ulong)uVar4 >> 0x38);
  }
  psVar7->segname[0xb] = cVar12;
  psVar7->segname[0xc] = cVar13;
  psVar7->segname[0xd] = cVar10;
  psVar7->segname[0xe] = cVar9;
  psVar7->segname[0xf] = cVar11;
  func_0x001869f8();
  auVar14._8_8_ = psVar7;
  auVar14._0_8_ = 0x1930f8;
  return auVar14;
}



/* Entry: 0015ffd8; end: 0016008b;  */

void FUN_0015ffd8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    FUN_00116294(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                 *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(undefined8 *)(lVar2 + 0x30) = uVar10;
    *(undefined8 *)(lVar2 + 0x28) = uVar8;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar10 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x00186a24(puVar1 + 4,puVar1 + 8);
    FUN_00116294(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    func_0x00186a58(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(puVar1);
  return;
}



/* Entry: 0016008c; end: 001600b3;  */

void FUN_0016008c(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
               *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 001600b4; end: 001600e3;  */

undefined8 FUN_001600b4(void)

{
  return 0x1600c4;
}



/* Entry: 001600e4; end: 0016010f;  */

void FUN_001600e4(void)

{
  func_0x000115a8(0xaf0ae0,&UNK_007db030);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00160110; end: 0016014f;  */

void FUN_00160110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0ae0;
  func_0x000115a8(0xaf0ae0,&UNK_007db030);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00160150; end: 0016017f;  */

undefined1  [16] FUN_00160150(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x160160;
  return auVar1;
}



/* Entry: 00160180; end: 001601a7;  */

void FUN_00160180(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 001601a8; end: 001601bb;  */

undefined8 FUN_001601a8(void)

{
  return 0x1601b8;
}



/* Entry: 001601bc; end: 001601fb;  */

undefined1  [16] FUN_001601bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 001601fc; end: 0016022f;  */

void FUN_001601fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 00160230; end: 00160287;  */

undefined1  [16] FUN_00160230(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1930fc;
  return auVar4;
}



/* Entry: 00160288; end: 00160297;  */

bool FUN_00160288(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 00160298; end: 001602b3;  */

void FUN_00160298(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 001602b4; end: 0016041b;  */

undefined8 FUN_001602b4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x30) != '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  return uVar1;
}



/* Entry: 0016041c; end: 00160457;  */

undefined1  [16] FUN_0016041c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x60) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
  }
  FUN_000308a8();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 00160458; end: 0016048b;  */

void FUN_00160458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023344(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 0016048c; end: 001604d7;  */

undefined1  [16] FUN_0016048c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  uVar3 = *(ulong *)(unaff_x20 + 0x60) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_000308a8();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_001604d8;
  return auVar4;
}



/* Entry: 001604d8; end: 00160557;  */

void FUN_001604d8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1[1];
  lVar3 = param_1[2];
  uVar6 = *param_1;
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  if ((param_2 & 1) == 0) {
    FUN_00023344(uVar2,uVar4);
    *(undefined8 *)(lVar3 + 0x58) = uVar6;
    *(ulong *)(lVar3 + 0x60) = uVar1;
    return;
  }
  func_0x00023304(uVar6,uVar1);
  FUN_00023344(uVar2,uVar4);
  *(undefined8 *)(lVar3 + 0x58) = uVar6;
  *(ulong *)(lVar3 + 0x60) = uVar1;
  uVar5 = (uint)(uVar1 >> 0x3e);
  if (uVar5 != 1) {
    if (uVar5 != 2) {
      return;
    }
    _swift_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00160558; end: 001605e3;  */

bool FUN_00160558(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = uVar2 >> 0x3c;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  if (uVar3 < 0xf) {
    func_0x00187028(&uStack_40,auStack_50,0xae8490,&UNK_007d0910);
    FUN_00023344(uVar1,uVar2);
    uVar1 = 0;
    uVar2 = 0xf000000000000000;
  }
  else {
    func_0x00187028(&uStack_40,auStack_50,0xae8490,&UNK_007d0910);
  }
  FUN_00023344(uVar1,uVar2);
  return uVar3 < 0xf;
}



/* Entry: 001605e4; end: 00160607;  */

void FUN_001605e4(void)

{
  long unaff_x20;
  
  FUN_00023344(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}



/* Entry: 00160608; end: 00160647;  */

undefined1  [16] FUN_00160608(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00160648; end: 0016067b;  */

void FUN_00160648(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 0016067c; end: 001606d3;  */

undefined1  [16] FUN_0016067c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_001606d4;
  return auVar4;
}



/* Entry: 001606d4; end: 00160733;  */

void FUN_001606d4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x68) = uVar1;
    *(undefined8 *)(lVar2 + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  return;
}



/* Entry: 00160734; end: 00160743;  */

bool FUN_00160734(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x70) != 0;
}



/* Entry: 00160744; end: 0016075f;  */

void FUN_00160744(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Entry: 00160760; end: 0016078f;  */

undefined1  [16] FUN_00160760(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00160790; end: 001607c3;  */

void FUN_00160790(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001607c4; end: 001607d7;  */

undefined1  [16] FUN_001607c4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1607d4;
  return auVar1;
}



/* Entry: 001607d8; end: 00160817;  */

undefined1  [16] FUN_001607d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00160818; end: 0016084b;  */

void FUN_00160818(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0016084c; end: 001608a3;  */

undefined1  [16] FUN_0016084c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_001608a4;
  return auVar4;
}


