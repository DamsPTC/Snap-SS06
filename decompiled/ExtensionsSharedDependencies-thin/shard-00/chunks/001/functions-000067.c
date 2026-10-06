/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0015b2ac; end: 0015b2cf;  */

void FUN_0015b2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_3);
  return;
}



/* Entry: 0015b2d0; end: 0015b2f7;  */

void FUN_0015b2d0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 0015b2f8; end: 0015b42b;  */

undefined1  [16] FUN_0015b2f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x15b308;
  return auVar1;
}



/* Entry: 0015b42c; end: 0015b527;  */

undefined1  [16] FUN_0015b42c(undefined8 *param_1)

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
    _swift_coroFrameAlloc(0x68,&UNK_00002da3);
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
  auVar14._0_8_ = 0x1930ec;
  return auVar14;
}



/* Entry: 0015b528; end: 0015b577;  */

undefined8 FUN_0015b528(void)

{
  return 0x15b538;
}



/* Entry: 0015b578; end: 0015b5bb;  */

char FUN_0015b578(void)

{
  char cVar1;
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(in_x3 + 0x10) != '\x03') {
    cVar1 = *(char *)(in_x3 + 0x10);
  }
  return cVar1;
}



/* Entry: 0015b5bc; end: 0015b6c3;  */

void FUN_0015b5bc(undefined1 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x10) = param_1;
  return;
}



/* Entry: 0015b6c4; end: 0015b76b;  */

void FUN_0015b6c4(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x10,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015b76c; end: 0015b7af;  */

bool FUN_0015b76c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  return *(char *)(in_x3 + 0x10) != '\x03';
}



/* Entry: 0015b7b0; end: 0015b82f;  */

void FUN_0015b7b0(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x10) = 3;
  return;
}



/* Entry: 0015b830; end: 0015b86f;  */

byte FUN_0015b830(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x11,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x11) & 1;
}



/* Entry: 0015b870; end: 0015b973;  */

void FUN_0015b870(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x11,auStack_48,1,0);
  *(byte *)(lVar2 + 0x11) = param_1 & 1;
  return;
}



/* Entry: 0015b974; end: 0015ba17;  */

void FUN_0015b974(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x11,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x11) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015ba18; end: 0015ba5b;  */

bool FUN_0015ba18(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x11,auStack_38,0,0);
  return *(char *)(in_x3 + 0x11) != '\x02';
}



/* Entry: 0015ba5c; end: 0015badb;  */

void FUN_0015ba5c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x11,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x11) = 2;
  return;
}



/* Entry: 0015badc; end: 0015bb1f;  */

char FUN_0015badc(void)

{
  char cVar1;
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x12,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(in_x3 + 0x12) != '\x03') {
    cVar1 = *(char *)(in_x3 + 0x12);
  }
  return cVar1;
}



/* Entry: 0015bb20; end: 0015bc27;  */

void FUN_0015bb20(undefined1 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x12,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x12) = param_1;
  return;
}



/* Entry: 0015bc28; end: 0015bccf;  */

void FUN_0015bc28(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x12,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x12) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015bcd0; end: 0015bd13;  */

bool FUN_0015bcd0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x12,auStack_38,0,0);
  return *(char *)(in_x3 + 0x12) != '\x03';
}



/* Entry: 0015bd14; end: 0015bd93;  */

void FUN_0015bd14(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x12,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x12) = 3;
  return;
}



/* Entry: 0015bd94; end: 0015bdd3;  */

byte FUN_0015bd94(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x13,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x13) & 1;
}



/* Entry: 0015bdd4; end: 0015bed7;  */

void FUN_0015bdd4(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x13,auStack_48,1,0);
  *(byte *)(lVar2 + 0x13) = param_1 & 1;
  return;
}



/* Entry: 0015bed8; end: 0015bf7b;  */

void FUN_0015bed8(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x13,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x13) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015bf7c; end: 0015bfbf;  */

bool FUN_0015bf7c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x13,auStack_38,0,0);
  return *(char *)(in_x3 + 0x13) != '\x02';
}



/* Entry: 0015bfc0; end: 0015c03f;  */

void FUN_0015bfc0(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x13,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x13) = 2;
  return;
}



/* Entry: 0015c040; end: 0015c07f;  */

byte FUN_0015c040(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x14,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x14) & 1;
}



/* Entry: 0015c080; end: 0015c183;  */

void FUN_0015c080(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x14,auStack_48,1,0);
  *(byte *)(lVar2 + 0x14) = param_1 & 1;
  return;
}



/* Entry: 0015c184; end: 0015c227;  */

void FUN_0015c184(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x14,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x14) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015c228; end: 0015c26b;  */

bool FUN_0015c228(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x14,auStack_38,0,0);
  return *(char *)(in_x3 + 0x14) != '\x02';
}



/* Entry: 0015c26c; end: 0015c2eb;  */

void FUN_0015c26c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x14,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x14) = 2;
  return;
}



/* Entry: 0015c2ec; end: 0015c32b;  */

byte FUN_0015c2ec(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x15,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x15) & 1;
}



/* Entry: 0015c32c; end: 0015c42f;  */

void FUN_0015c32c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x15,auStack_48,1,0);
  *(byte *)(lVar2 + 0x15) = param_1 & 1;
  return;
}



/* Entry: 0015c430; end: 0015c4d3;  */

void FUN_0015c430(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x15,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x15) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015c4d4; end: 0015c517;  */

bool FUN_0015c4d4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x15,auStack_38,0,0);
  return *(char *)(in_x3 + 0x15) != '\x02';
}



/* Entry: 0015c518; end: 0015c597;  */

void FUN_0015c518(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x15,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x15) = 2;
  return;
}



/* Entry: 0015c598; end: 0015c5d7;  */

byte FUN_0015c598(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x16,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x16) & 1;
}



/* Entry: 0015c5d8; end: 0015c6db;  */

void FUN_0015c5d8(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x16,auStack_48,1,0);
  *(byte *)(lVar2 + 0x16) = param_1 & 1;
  return;
}



/* Entry: 0015c6dc; end: 0015c77f;  */

void FUN_0015c6dc(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x16,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x16) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015c780; end: 0015c7c3;  */

bool FUN_0015c780(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x16,auStack_38,0,0);
  return *(char *)(in_x3 + 0x16) != '\x02';
}



/* Entry: 0015c7c4; end: 0015c843;  */

void FUN_0015c7c4(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x16,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x16) = 2;
  return;
}



/* Entry: 0015c844; end: 0015c883;  */

byte FUN_0015c844(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x17,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x17) & 1;
}



/* Entry: 0015c884; end: 0015c987;  */

void FUN_0015c884(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x17,auStack_48,1,0);
  *(byte *)(lVar2 + 0x17) = param_1 & 1;
  return;
}



/* Entry: 0015c988; end: 0015ca2b;  */

void FUN_0015c988(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x17,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x17) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015ca2c; end: 0015ca6f;  */

bool FUN_0015ca2c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x17,auStack_38,0,0);
  return *(char *)(in_x3 + 0x17) != '\x02';
}



/* Entry: 0015ca70; end: 0015caef;  */

void FUN_0015ca70(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x17,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x17) = 2;
  return;
}



/* Entry: 0015caf0; end: 0015cb33;  */

char FUN_0015caf0(void)

{
  char cVar1;
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x18,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(in_x3 + 0x18) != '\x03') {
    cVar1 = *(char *)(in_x3 + 0x18);
  }
  return cVar1;
}



/* Entry: 0015cb34; end: 0015cc3b;  */

void FUN_0015cb34(undefined1 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x18,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x18) = param_1;
  return;
}



/* Entry: 0015cc3c; end: 0015cce3;  */

void FUN_0015cc3c(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x18,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015cce4; end: 0015cd27;  */

bool FUN_0015cce4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x18,auStack_38,0,0);
  return *(char *)(in_x3 + 0x18) != '\x03';
}



/* Entry: 0015cd28; end: 0015cda7;  */

void FUN_0015cd28(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x18,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x18) = 3;
  return;
}



/* Entry: 0015cda8; end: 0015cde7;  */

void FUN_0015cda8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x20));
  return;
}



/* Entry: 0015cde8; end: 0015cef7;  */

void FUN_0015cde8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015cef8; end: 0015d007;  */

void FUN_0015cef8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0015d008; end: 0015d047;  */

void FUN_0015d008(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x28,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x28));
  return;
}



/* Entry: 0015d048; end: 0015d157;  */

void FUN_0015d048(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015d158; end: 0015d267;  */

void FUN_0015d158(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0015d268; end: 0015d37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0015d268(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long in_x3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_48,0,0);
  uVar4 = *(undefined8 *)(in_x3 + 0x30);
  uVar1 = *(undefined8 *)(in_x3 + 0x48);
  if (*(long *)(in_x3 + 0x40) == 0) {
    uVar4 = 0;
    bVar11 = 5;
    bVar10 = 3;
    bVar9 = 3;
    bVar8 = 3;
    bVar7 = 3;
    bVar6 = 3;
    uStack_88 = 4;
    uStack_90 = 0x300;
  }
  else {
    bVar5 = (byte)((ulong)uVar1 >> 8);
    bVar6 = (byte)((ulong)uVar1 >> 0x10);
    bVar7 = (byte)((ulong)uVar1 >> 0x18);
    bVar8 = (byte)((ulong)uVar1 >> 0x20);
    bVar9 = (byte)((ulong)uVar1 >> 0x28);
    bVar10 = (byte)((ulong)uVar1 >> 0x30);
    bVar11 = (byte)((ulong)uVar1 >> 0x38);
    uStack_88 = CONCAT17(bVar11 & UNK_007dff30._15_1_,
                         CONCAT16(bVar10 & UNK_007dff30._14_1_,
                                  CONCAT15(bVar9 & UNK_007dff30._13_1_,
                                           CONCAT14(bVar8 & UNK_007dff30._12_1_,
                                                    CONCAT13(bVar7 & UNK_007dff30._11_1_,
                                                             CONCAT12(bVar6 & UNK_007dff30._10_1_,
                                                                      CONCAT11(bVar5 & UNK_007dff30.
                                                                                       _9_1_,
                                                                               (byte)uVar1 &
                                                                               UNK_007dff30._8_1_)))
                                                   ))));
    uStack_90 = CONCAT17(bVar11 & UNK_007dff30._7_1_,
                         CONCAT16(bVar10 & UNK_007dff30._6_1_,
                                  CONCAT15(bVar9 & UNK_007dff30._5_1_,
                                           CONCAT14(bVar8 & UNK_007dff30._4_1_,
                                                    CONCAT13(bVar7 & UNK_007dff30._3_1_,
                                                             CONCAT12(bVar6 & UNK_007dff30._2_1_,
                                                                      CONCAT11(bVar5 & UNK_007dff30.
                                                                                       _1_1_,
                                                                               (byte)uVar1 &
                                                                               UNK_007dff30)))))));
  }
  func_0x001869f8();
  auVar2[2] = uStack_90._2_1_ | bVar6;
  auVar2._0_2_ = (short)uStack_90;
  auVar2[3] = uStack_90._3_1_;
  auVar2[4] = uStack_90._4_1_ | bVar8;
  auVar2[5] = uStack_90._5_1_;
  auVar2[6] = uStack_90._6_1_ | bVar10;
  auVar2[7] = uStack_90._7_1_;
  auVar2[8] = (undefined1)uStack_88;
  auVar2[9] = uStack_88._1_1_;
  auVar2[10] = uStack_88._2_1_;
  auVar2[0xb] = uStack_88._3_1_ | bVar7;
  auVar2[0xc] = uStack_88._4_1_;
  auVar2[0xd] = uStack_88._5_1_ | bVar9;
  auVar2[0xe] = uStack_88._6_1_;
  auVar2[0xf] = uStack_88._7_1_ | bVar11;
  auVar3[2] = uStack_90._2_1_ | bVar6;
  auVar3._0_2_ = (short)uStack_90;
  auVar3[3] = uStack_90._3_1_;
  auVar3[4] = uStack_90._4_1_ | bVar8;
  auVar3[5] = uStack_90._5_1_;
  auVar3[6] = uStack_90._6_1_ | bVar10;
  auVar3[7] = uStack_90._7_1_;
  auVar3[8] = (undefined1)uStack_88;
  auVar3[9] = uStack_88._1_1_;
  auVar3[10] = uStack_88._2_1_;
  auVar3[0xb] = uStack_88._3_1_ | bVar7;
  auVar3[0xc] = uStack_88._4_1_;
  auVar3[0xd] = uStack_88._5_1_ | bVar9;
  auVar3[0xe] = uStack_88._6_1_;
  auVar3[0xf] = uStack_88._7_1_ | bVar11;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 0015d37c; end: 0015d423;  */

void FUN_0015d37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x18) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0x30,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x30);
  uVar2 = *(undefined8 *)(lVar6 + 0x38);
  uVar1 = *(undefined8 *)(lVar6 + 0x40);
  uVar3 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0x30) = param_1;
  *(undefined8 *)(lVar6 + 0x38) = param_2;
  *(undefined8 *)(lVar6 + 0x40) = param_3;
  *(undefined8 *)(lVar6 + 0x48) = param_4;
  FUN_00116294(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 0015d424; end: 0015d7ab;  */

undefined1  [16] FUN_0015d424(undefined8 *param_1)

{
  undefined8 uVar1;
  qword qVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  pcVar7 = section_00000068.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,&UNK_00002595);
  }
  *param_1 = pcVar7;
  *(long *)(pcVar7 + 0x78) = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar13 + 0x30,pcVar7 + 0x60,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar4 = *(undefined **)(lVar13 + 0x40);
  uVar5 = *(undefined8 *)(lVar13 + 0x48);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x30);
  }
  qVar2 = 0xc000000000000000;
  if (bVar6) {
    qVar2 = *(qword *)(lVar13 + 0x38);
  }
  *(undefined8 *)pcVar7 = uVar1;
  *(qword *)(pcVar7 + 8) = qVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  *(undefined **)(pcVar7 + 0x10) = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  pcVar7[0x18] = uVar9;
  pcVar7[0x19] = uVar10;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x10);
  }
  uVar9 = 3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  uVar11 = uVar9;
  if (puVar4 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar12 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar9 = (undefined1)((ulong)uVar5 >> 0x30);
  }
  pcVar7[0x1a] = uVar8;
  pcVar7[0x1b] = uVar11;
  pcVar7[0x1c] = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  pcVar7[0x1d] = uVar10;
  pcVar7[0x1e] = uVar9;
  pcVar7[0x1f] = uVar8;
  func_0x001869f8();
  auVar14._8_8_ = pcVar7;
  auVar14._0_8_ = 0x15d538;
  return auVar14;
}



/* Entry: 0015d7ac; end: 0015d853;  */

void FUN_0015d7ac(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  long in_x3;
  undefined1 uVar8;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_68,0,0);
  bVar6 = *(long *)(in_x3 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(in_x3 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(in_x3 + 0x58);
  }
  uVar8 = 0xc;
  uVar7 = uVar8;
  if (bVar6) {
    uVar7 = (undefined1)*(undefined8 *)(in_x3 + 0x60);
  }
  if (bVar6) {
    uVar8 = (undefined1)((ulong)*(undefined8 *)(in_x3 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(in_x3 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(in_x3 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(in_x3 + 0x78);
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



/* Entry: 0015d854; end: 0015d877;  */

void FUN_0015d854(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xc0c;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xc;
  return;
}



/* Entry: 0015d878; end: 0015d943;  */

void FUN_0015d878(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  ushort uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar11 = *(ushort *)(param_1 + 2);
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar9 = *(undefined1 *)(param_1 + 5);
  uVar12 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar14 = *(long *)(unaff_x20 + 0x18);
  if ((uVar12 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar14;
  }
  _swift_beginAccess(lVar14 + 0x50,auStack_78,1,0);
  uVar3 = *(undefined8 *)(lVar14 + 0x50);
  uVar7 = *(undefined8 *)(lVar14 + 0x58);
  uVar4 = *(undefined8 *)(lVar14 + 0x60);
  uVar8 = *(undefined8 *)(lVar14 + 0x68);
  uVar13 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(lVar14 + 0x50) = uVar1;
  *(undefined8 *)(lVar14 + 0x58) = uVar5;
  *(ulong *)(lVar14 + 0x60) = (ulong)uVar11;
  *(undefined8 *)(lVar14 + 0x68) = uVar2;
  *(undefined8 *)(lVar14 + 0x70) = uVar6;
  uVar10 = *(undefined1 *)(lVar14 + 0x78);
  *(undefined1 *)(lVar14 + 0x78) = uVar9;
  FUN_00116310(uVar3,uVar7,uVar4,uVar8,uVar13,uVar10);
  return;
}



/* Entry: 0015d944; end: 0015da0b;  */

undefined1  [16] FUN_0015d944(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  qword qVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  
  pcVar7 = section_00000068.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,"s/Combine.framework/Combine");
  }
  *param_1 = pcVar7;
  *(long *)(pcVar7 + 0x78) = unaff_x20;
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar10 + 0x50,pcVar7 + 0x30,0,0);
  bVar6 = *(long *)(lVar10 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar10 + 0x50);
  }
  qVar3 = 0xc000000000000000;
  if (bVar6) {
    qVar3 = *(qword *)(lVar10 + 0x58);
  }
  uVar9 = 0xc;
  uVar8 = uVar9;
  if (bVar6) {
    uVar8 = (undefined1)*(undefined8 *)(lVar10 + 0x60);
    uVar9 = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(lVar10 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(lVar10 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(lVar10 + 0x78);
  }
  *(undefined8 *)pcVar7 = uVar2;
  *(qword *)(pcVar7 + 8) = qVar3;
  pcVar7[0x10] = uVar8;
  pcVar7[0x11] = uVar9;
  *(undefined8 *)(pcVar7 + 0x18) = uVar4;
  *(long *)(pcVar7 + 0x20) = lVar5;
  pcVar7[0x28] = uVar1;
  FUN_00186ff8();
  auVar11._8_8_ = pcVar7;
  auVar11._0_8_ = FUN_0015da0c;
  return auVar11;
}



/* Entry: 0015da0c; end: 0015db8b;  */

void FUN_0015da0c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  param_1 = (undefined8 *)*param_1;
  uVar15 = *param_1;
  uVar3 = param_1[1];
  uVar10 = *(ushort *)(param_1 + 2);
  uVar9 = *(ushort *)(param_1 + 2);
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *(undefined1 *)(param_1 + 5);
  lVar14 = param_1[0xf];
  if ((param_2 & 1) == 0) {
    uVar11 = *(ulong *)(lVar14 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = *(long *)(lVar14 + 0x18);
    if ((uVar11 & 1) == 0) {
      lVar16 = param_1[0xf];
      uVar12 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar14,uVar12);
      *(long *)(lVar16 + 0x18) = lVar14;
    }
    _swift_beginAccess(lVar14 + 0x50,param_1 + 0xc,1,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x50);
    uVar5 = *(undefined8 *)(lVar14 + 0x58);
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    uVar6 = *(undefined8 *)(lVar14 + 0x68);
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
    *(undefined8 *)(lVar14 + 0x50) = uVar15;
    *(undefined8 *)(lVar14 + 0x58) = uVar3;
    *(ulong *)(lVar14 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar14 + 0x68) = uVar1;
    *(undefined8 *)(lVar14 + 0x70) = uVar4;
    uVar8 = *(undefined1 *)(lVar14 + 0x78);
    *(undefined1 *)(lVar14 + 0x78) = uVar7;
    FUN_00116310(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
  }
  else {
    func_0x00023304(uVar15,uVar3);
    _swift_bridgeObjectRetain(uVar4);
    uVar11 = *(ulong *)(lVar14 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = *(long *)(lVar14 + 0x18);
    if ((uVar11 & 1) == 0) {
      lVar16 = param_1[0xf];
      uVar12 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar14,uVar12);
      *(long *)(lVar16 + 0x18) = lVar14;
    }
    _swift_beginAccess(lVar14 + 0x50,param_1 + 9,1,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x50);
    uVar5 = *(undefined8 *)(lVar14 + 0x58);
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    uVar6 = *(undefined8 *)(lVar14 + 0x68);
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
    *(undefined8 *)(lVar14 + 0x50) = uVar15;
    *(undefined8 *)(lVar14 + 0x58) = uVar3;
    *(ulong *)(lVar14 + 0x60) = (ulong)uVar9;
    *(undefined8 *)(lVar14 + 0x68) = uVar1;
    *(undefined8 *)(lVar14 + 0x70) = uVar4;
    uVar8 = *(undefined1 *)(lVar14 + 0x78);
    *(undefined1 *)(lVar14 + 0x78) = uVar7;
    FUN_00116310(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
    uVar15 = param_1[4];
    FUN_00023358(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 0015db8c; end: 0015dc6f;  */

bool FUN_0015db8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_58,0,0);
  uVar1 = *(undefined8 *)(in_x3 + 0x50);
  uVar2 = *(undefined8 *)(in_x3 + 0x58);
  uVar3 = *(undefined8 *)(in_x3 + 0x60);
  uVar4 = *(undefined8 *)(in_x3 + 0x68);
  lVar6 = *(long *)(in_x3 + 0x70);
  uVar5 = *(undefined1 *)(in_x3 + 0x78);
  if (lVar6 == 1) {
    FUN_00186ff8(uVar1,uVar2,uVar3,uVar4,1,uVar5);
  }
  else {
    FUN_00186ff8(uVar1,uVar2,uVar3,uVar4,lVar6,uVar5);
    FUN_00116310(uVar1,uVar2,uVar3,uVar4,lVar6,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_00116310(uVar1,uVar2,uVar3,uVar4,1,uVar5);
  return lVar6 != 1;
}



/* Entry: 0015dc70; end: 0015dd0f;  */

void FUN_0015dc70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar8 = *(long *)(unaff_x20 + 0x18);
  if ((uVar6 & 1) == 0) {
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c();
    *(long *)(unaff_x20 + 0x18) = lVar8;
  }
  _swift_beginAccess(lVar8 + 0x50,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar3 = *(undefined8 *)(lVar8 + 0x58);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  uVar4 = *(undefined8 *)(lVar8 + 0x68);
  uVar7 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 1;
  uVar5 = *(undefined1 *)(lVar8 + 0x78);
  *(undefined1 *)(lVar8 + 0x78) = 0;
  FUN_00116310(uVar1,uVar3,uVar2,uVar4,uVar7,uVar5);
  return;
}



/* Entry: 0015dd10; end: 0015dd4f;  */

void FUN_0015dd10(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x80,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x80));
  return;
}



/* Entry: 0015dd50; end: 0015de5f;  */

void FUN_0015dd50(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x00186fd8(0);
    _swift_allocObject();
    FUN_0017341c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015de60; end: 0015df6f;  */

void FUN_0015de60(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x80,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      func_0x00186fd8(0);
      _swift_allocObject();
      FUN_0017341c(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x80,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0015df70; end: 0015df8b;  */

undefined8 FUN_0015df70(void)

{
  return 0x15df80;
}



/* Entry: 0015df8c; end: 0015dfb7;  */

void FUN_0015df8c(void)

{
  func_0x000115a8(0xaf09f0,&UNK_007db008);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0015dfb8; end: 0015dfe3;  */

void FUN_0015dfb8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 0015dfe4; end: 0015e023;  */

void FUN_0015dfe4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf09f0;
  func_0x000115a8(0xaf09f0,&UNK_007db008);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0015e024; end: 0015e02b;  */

undefined8 FUN_0015e024(void)

{
  return 0;
}



/* Entry: 0015e02c; end: 0015e057;  */

void FUN_0015e02c(void)

{
  func_0x000115a8(0xaf0a28,&UNK_007db010);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0015e058; end: 0015e097;  */

void FUN_0015e058(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0a28;
  func_0x000115a8(0xaf0a28,&UNK_007db010);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0015e098; end: 0015e09f;  */

undefined8 FUN_0015e098(void)

{
  return 0;
}



/* Entry: 0015e0a0; end: 0015e0cb;  */

void FUN_0015e0a0(void)

{
  func_0x000115a8(0xaf0a60,&UNK_007db018);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0015e0cc; end: 0015e10b;  */

void FUN_0015e0cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf0a60;
  func_0x000115a8(0xaf0a60,&UNK_007db018);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 0015e10c; end: 0015e117;  */

undefined8 FUN_0015e10c(void)

{
  return 0;
}



/* Entry: 0015e118; end: 0015e143;  */

void FUN_0015e118(void)

{
  func_0x000115a8(0xaf0aa0,&UNK_007db020);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0015e144; end: 0015e1cf;  */

void FUN_0015e144(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x00186368();
  *param_1 = uVar1;
  return;
}



/* Entry: 0015e1d0; end: 0015e237;  */

char FUN_0015e1d0(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0x10) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0x10);
  }
  return cVar1;
}



/* Entry: 0015e238; end: 0015e277;  */

undefined1  [16] FUN_0015e238(void)

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



/* Entry: 0015e278; end: 0015e2ab;  */

void FUN_0015e278(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 0015e2ac; end: 0015e303;  */

undefined1  [16] FUN_0015e2ac(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_0015e304;
  return auVar4;
}



/* Entry: 0015e304; end: 0015e317;  */

void FUN_0015e304(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  return;
}



/* Entry: 0015e318; end: 0015e333;  */

void FUN_0015e318(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 0015e334; end: 0015e363;  */

undefined1  [16] FUN_0015e334(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0015e364; end: 0015e397;  */

void FUN_0015e364(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0015e398; end: 0015e487;  */

undefined8 FUN_0015e398(void)

{
  return 0x15e3a8;
}



/* Entry: 0015e488; end: 0015e4c7;  */

undefined1  [16] FUN_0015e488(void)

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



/* Entry: 0015e4c8; end: 0015e4fb;  */

void FUN_0015e4c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 0015e4fc; end: 0015e553;  */

undefined1  [16] FUN_0015e4fc(undefined8 *param_1)

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
  auVar4._0_8_ = 0x1930e8;
  return auVar4;
}



/* Entry: 0015e554; end: 0015e563;  */

bool FUN_0015e554(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 0015e564; end: 0015e57f;  */

void FUN_0015e564(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 0015e580; end: 0015e5e7;  */

char FUN_0015e580(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0x28) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0x28);
  }
  return cVar1;
}



/* Entry: 0015e5e8; end: 0015e617;  */

undefined1  [16] FUN_0015e5e8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0015e618; end: 0015e64b;  */

void FUN_0015e618(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0015e64c; end: 0015e687;  */

undefined8 FUN_0015e64c(void)

{
  return 0x15e65c;
}


