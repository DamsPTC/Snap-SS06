/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045cd410; end: 1045cd43b;  */

void FUN_1045cd410(void)

{
  func_0x0001000285a8(0x113087b18,&UNK_10dd19c70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045cd43c; end: 1045cd447;  */

long FUN_1045cd43c(ulong param_1)

{
  return (param_1 & 0xff) + 1;
}



/* Entry: 1045cd448; end: 1045cd4cb;  */

void FUN_1045cd448(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF((ulong)bVar1 + 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045cd4cc; end: 1045cd517;  */

void FUN_1045cd4cc(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x2010003 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1045cd518; end: 1045cd557;  */

void FUN_1045cd518(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087b18;
  func_0x0001000285a8(0x113087b18,&UNK_10dd19c70);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045cd558; end: 1045cd6a7;  */

void FUN_1045cd558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1045cd6a8; end: 1045cd7a3;  */

undefined1  [16] FUN_1045cd6a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x2da3);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x104604a10;
  return auVar14;
}



/* Entry: 1045cd7a4; end: 1045cd7f3;  */

undefined8 FUN_1045cd7a4(void)

{
  return 0x1045cd7b4;
}



/* Entry: 1045cd7f4; end: 1045cd837;  */

char FUN_1045cd7f4(void)

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



/* Entry: 1045cd838; end: 1045cd93f;  */

void FUN_1045cd838(undefined1 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x10) = param_1;
  return;
}



/* Entry: 1045cd940; end: 1045cd9e7;  */

void FUN_1045cd940(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x10,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cd9e8; end: 1045cda2b;  */

bool FUN_1045cd9e8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  return *(char *)(in_x3 + 0x10) != '\x03';
}



/* Entry: 1045cda2c; end: 1045cdaab;  */

void FUN_1045cda2c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x10) = 3;
  return;
}



/* Entry: 1045cdaac; end: 1045cdaeb;  */

byte FUN_1045cdaac(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x11,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x11) & 1;
}



/* Entry: 1045cdaec; end: 1045cdbef;  */

void FUN_1045cdaec(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x11,auStack_48,1,0);
  *(byte *)(lVar2 + 0x11) = param_1 & 1;
  return;
}



/* Entry: 1045cdbf0; end: 1045cdc93;  */

void FUN_1045cdbf0(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x11,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x11) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cdc94; end: 1045cdcd7;  */

bool FUN_1045cdc94(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x11,auStack_38,0,0);
  return *(char *)(in_x3 + 0x11) != '\x02';
}



/* Entry: 1045cdcd8; end: 1045cdd57;  */

void FUN_1045cdcd8(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x11,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x11) = 2;
  return;
}



/* Entry: 1045cdd58; end: 1045cdd9b;  */

char FUN_1045cdd58(void)

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



/* Entry: 1045cdd9c; end: 1045cdea3;  */

void FUN_1045cdd9c(undefined1 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x12,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x12) = param_1;
  return;
}



/* Entry: 1045cdea4; end: 1045cdf4b;  */

void FUN_1045cdea4(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x12,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x12) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cdf4c; end: 1045cdf8f;  */

bool FUN_1045cdf4c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x12,auStack_38,0,0);
  return *(char *)(in_x3 + 0x12) != '\x03';
}



/* Entry: 1045cdf90; end: 1045ce00f;  */

void FUN_1045cdf90(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x12,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x12) = 3;
  return;
}



/* Entry: 1045ce010; end: 1045ce04f;  */

byte FUN_1045ce010(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x13,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x13) & 1;
}



/* Entry: 1045ce050; end: 1045ce153;  */

void FUN_1045ce050(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x13,auStack_48,1,0);
  *(byte *)(lVar2 + 0x13) = param_1 & 1;
  return;
}



/* Entry: 1045ce154; end: 1045ce1f7;  */

void FUN_1045ce154(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x13,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x13) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ce1f8; end: 1045ce23b;  */

bool FUN_1045ce1f8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x13,auStack_38,0,0);
  return *(char *)(in_x3 + 0x13) != '\x02';
}



/* Entry: 1045ce23c; end: 1045ce2bb;  */

void FUN_1045ce23c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x13,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x13) = 2;
  return;
}



/* Entry: 1045ce2bc; end: 1045ce2fb;  */

byte FUN_1045ce2bc(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x14,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x14) & 1;
}



/* Entry: 1045ce2fc; end: 1045ce3ff;  */

void FUN_1045ce2fc(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x14,auStack_48,1,0);
  *(byte *)(lVar2 + 0x14) = param_1 & 1;
  return;
}



/* Entry: 1045ce400; end: 1045ce4a3;  */

void FUN_1045ce400(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x14,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x14) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ce4a4; end: 1045ce4e7;  */

bool FUN_1045ce4a4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x14,auStack_38,0,0);
  return *(char *)(in_x3 + 0x14) != '\x02';
}



/* Entry: 1045ce4e8; end: 1045ce567;  */

void FUN_1045ce4e8(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x14,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x14) = 2;
  return;
}



/* Entry: 1045ce568; end: 1045ce5a7;  */

byte FUN_1045ce568(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x15,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x15) & 1;
}



/* Entry: 1045ce5a8; end: 1045ce6ab;  */

void FUN_1045ce5a8(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x15,auStack_48,1,0);
  *(byte *)(lVar2 + 0x15) = param_1 & 1;
  return;
}



/* Entry: 1045ce6ac; end: 1045ce74f;  */

void FUN_1045ce6ac(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x15,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x15) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ce750; end: 1045ce793;  */

bool FUN_1045ce750(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x15,auStack_38,0,0);
  return *(char *)(in_x3 + 0x15) != '\x02';
}



/* Entry: 1045ce794; end: 1045ce813;  */

void FUN_1045ce794(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x15,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x15) = 2;
  return;
}



/* Entry: 1045ce814; end: 1045ce853;  */

byte FUN_1045ce814(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x16,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x16) & 1;
}



/* Entry: 1045ce854; end: 1045ce957;  */

void FUN_1045ce854(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x16,auStack_48,1,0);
  *(byte *)(lVar2 + 0x16) = param_1 & 1;
  return;
}



/* Entry: 1045ce958; end: 1045ce9fb;  */

void FUN_1045ce958(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x16,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x16) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ce9fc; end: 1045cea3f;  */

bool FUN_1045ce9fc(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x16,auStack_38,0,0);
  return *(char *)(in_x3 + 0x16) != '\x02';
}



/* Entry: 1045cea40; end: 1045ceabf;  */

void FUN_1045cea40(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x16,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x16) = 2;
  return;
}



/* Entry: 1045ceac0; end: 1045ceaff;  */

byte FUN_1045ceac0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x17,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x17) & 1;
}



/* Entry: 1045ceb00; end: 1045cec03;  */

void FUN_1045ceb00(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x17,auStack_48,1,0);
  *(byte *)(lVar2 + 0x17) = param_1 & 1;
  return;
}



/* Entry: 1045cec04; end: 1045ceca7;  */

void FUN_1045cec04(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x17,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x17) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ceca8; end: 1045ceceb;  */

bool FUN_1045ceca8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x17,auStack_38,0,0);
  return *(char *)(in_x3 + 0x17) != '\x02';
}



/* Entry: 1045cecec; end: 1045ced6b;  */

void FUN_1045cecec(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x17,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x17) = 2;
  return;
}



/* Entry: 1045ced6c; end: 1045cedaf;  */

char FUN_1045ced6c(void)

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



/* Entry: 1045cedb0; end: 1045ceeb7;  */

void FUN_1045cedb0(undefined1 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x18,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x18) = param_1;
  return;
}



/* Entry: 1045ceeb8; end: 1045cef5f;  */

void FUN_1045ceeb8(long *param_1,ulong param_2)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x18,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cef60; end: 1045cefa3;  */

bool FUN_1045cef60(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x18,auStack_38,0,0);
  return *(char *)(in_x3 + 0x18) != '\x03';
}



/* Entry: 1045cefa4; end: 1045cf023;  */

void FUN_1045cefa4(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x18,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x18) = 3;
  return;
}



/* Entry: 1045cf024; end: 1045cf063;  */

void FUN_1045cf024(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x20));
  return;
}



/* Entry: 1045cf064; end: 1045cf173;  */

void FUN_1045cf064(undefined8 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cf174; end: 1045cf283;  */

void FUN_1045cf174(long *param_1,ulong param_2)

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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045cf284; end: 1045cf2c3;  */

void FUN_1045cf284(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x28,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x28));
  return;
}



/* Entry: 1045cf2c4; end: 1045cf3d3;  */

void FUN_1045cf2c4(undefined8 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cf3d4; end: 1045cf4e3;  */

void FUN_1045cf3d4(long *param_1,ulong param_2)

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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045cf4e4; end: 1045cf5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1045cf4e4(void)

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
    uStack_88 = CONCAT17(bVar11 & UNK_10dd1eba0._15_1_,
                         CONCAT16(bVar10 & UNK_10dd1eba0._14_1_,
                                  CONCAT15(bVar9 & UNK_10dd1eba0._13_1_,
                                           CONCAT14(bVar8 & UNK_10dd1eba0._12_1_,
                                                    CONCAT13(bVar7 & UNK_10dd1eba0._11_1_,
                                                             CONCAT12(bVar6 & UNK_10dd1eba0._10_1_,
                                                                      CONCAT11(bVar5 & UNK_10dd1eba0
                                                                                       ._9_1_,
                                                                               (byte)uVar1 &
                                                                               UNK_10dd1eba0._8_1_))
                                                            )))));
    uStack_90 = CONCAT17(bVar11 & UNK_10dd1eba0._7_1_,
                         CONCAT16(bVar10 & UNK_10dd1eba0._6_1_,
                                  CONCAT15(bVar9 & UNK_10dd1eba0._5_1_,
                                           CONCAT14(bVar8 & UNK_10dd1eba0._4_1_,
                                                    CONCAT13(bVar7 & UNK_10dd1eba0._3_1_,
                                                             CONCAT12(bVar6 & UNK_10dd1eba0._2_1_,
                                                                      CONCAT11(bVar5 & UNK_10dd1eba0
                                                                                       ._1_1_,
                                                                               (byte)uVar1 &
                                                                               UNK_10dd1eba0)))))));
  }
  func_0x0001045f8978();
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



/* Entry: 1045cf5f8; end: 1045cf69f;  */

void FUN_1045cf5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar6,uVar5);
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
  func_0x00010458a4f4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 1045cf6a0; end: 1045cfa27;  */

undefined1  [16] FUN_1045cf6a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,0x2595);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar13 + 0x30,puVar7 + 0xc,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = *(undefined **)(lVar13 + 0x40);
  uVar5 = *(undefined8 *)(lVar13 + 0x48);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x30);
  }
  uVar2 = 0xc000000000000000;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar13 + 0x38);
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  puVar7[2] = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  *(undefined1 *)(puVar7 + 3) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x19) = uVar10;
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
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar11;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar8;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x1045cf7b4;
  return auVar14;
}



/* Entry: 1045cfa28; end: 1045cfacf;  */

void FUN_1045cfa28(undefined8 *param_1)

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
  FUN_1045f8f78();
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((long)param_1 + 0x11) = uVar8;
  param_1[3] = uVar4;
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}



/* Entry: 1045cfad0; end: 1045cfaf3;  */

void FUN_1045cfad0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xc0c;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xc;
  return;
}



/* Entry: 1045cfaf4; end: 1045cfbbf;  */

void FUN_1045cfaf4(undefined8 *param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
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
  FUN_10458a570(uVar3,uVar7,uVar4,uVar8,uVar13,uVar10);
  return;
}



/* Entry: 1045cfbc0; end: 1045cfc87;  */

undefined1  [16] FUN_1045cfbc0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,0x1589);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar10 + 0x50,puVar7 + 6,0,0);
  bVar6 = *(long *)(lVar10 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar10 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(lVar10 + 0x58);
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
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  *(undefined1 *)(puVar7 + 2) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x11) = uVar9;
  puVar7[3] = uVar4;
  puVar7[4] = lVar5;
  *(undefined1 *)(puVar7 + 5) = uVar1;
  FUN_1045f8f78();
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = FUN_1045cfc88;
  return auVar11;
}



/* Entry: 1045cfc88; end: 1045cfe07;  */

void FUN_1045cfc88(undefined8 *param_1,ulong param_2)

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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar14,uVar12);
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
    FUN_10458a570(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
  }
  else {
    func_0x00010006c00c(uVar15,uVar3);
    _swift_bridgeObjectRetain(uVar4);
    uVar11 = *(ulong *)(lVar14 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = *(long *)(lVar14 + 0x18);
    if ((uVar11 & 1) == 0) {
      lVar16 = param_1[0xf];
      uVar12 = 0;
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar14,uVar12);
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
    FUN_10458a570(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
    uVar15 = param_1[4];
    func_0x00010006c090(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045cfe08; end: 1045cfeeb;  */

bool FUN_1045cfe08(void)

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
    FUN_1045f8f78(uVar1,uVar2,uVar3,uVar4,1,uVar5);
  }
  else {
    FUN_1045f8f78(uVar1,uVar2,uVar3,uVar4,lVar6,uVar5);
    FUN_10458a570(uVar1,uVar2,uVar3,uVar4,lVar6,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_10458a570(uVar1,uVar2,uVar3,uVar4,1,uVar5);
  return lVar6 != 1;
}



/* Entry: 1045cfeec; end: 1045cff8b;  */

void FUN_1045cfeec(void)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498();
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
  FUN_10458a570(uVar1,uVar3,uVar2,uVar4,uVar7,uVar5);
  return;
}



/* Entry: 1045cff8c; end: 1045cffcb;  */

void FUN_1045cff8c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x80,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0x80));
  return;
}



/* Entry: 1045cffcc; end: 1045d00db;  */

void FUN_1045cffcc(undefined8 param_1)

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
    func_0x0001045f8f58(0);
    _swift_allocObject();
    FUN_1045e5498(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045d00dc; end: 1045d01eb;  */

void FUN_1045d00dc(long *param_1,ulong param_2)

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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
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
      func_0x0001045f8f58(0);
      _swift_allocObject();
      FUN_1045e5498(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x80,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045d01ec; end: 1045d0207;  */

undefined8 FUN_1045d01ec(void)

{
  return 0x1045d01fc;
}



/* Entry: 1045d0208; end: 1045d0233;  */

void FUN_1045d0208(void)

{
  func_0x0001000285a8(0x113087b50,&UNK_10dd19c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d0234; end: 1045d0273;  */

void FUN_1045d0234(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087b50;
  func_0x0001000285a8(0x113087b50,&UNK_10dd19c78);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d0274; end: 1045d027b;  */

undefined8 FUN_1045d0274(void)

{
  return 0;
}



/* Entry: 1045d027c; end: 1045d02a7;  */

void FUN_1045d027c(void)

{
  func_0x0001000285a8(0x113087b88,&UNK_10dd19c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d02a8; end: 1045d02e7;  */

void FUN_1045d02a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087b88;
  func_0x0001000285a8(0x113087b88,&UNK_10dd19c80);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d02e8; end: 1045d02ef;  */

undefined8 FUN_1045d02e8(void)

{
  return 0;
}



/* Entry: 1045d02f0; end: 1045d031b;  */

void FUN_1045d02f0(void)

{
  func_0x0001000285a8(0x113087bc0,&UNK_10dd19c88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d031c; end: 1045d035b;  */

void FUN_1045d031c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087bc0;
  func_0x0001000285a8(0x113087bc0,&UNK_10dd19c88);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d035c; end: 1045d0367;  */

undefined8 FUN_1045d035c(void)

{
  return 0;
}



/* Entry: 1045d0368; end: 1045d0393;  */

void FUN_1045d0368(void)

{
  func_0x0001000285a8(0x113087c00,&UNK_10dd19c90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d0394; end: 1045d041f;  */

void FUN_1045d0394(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x0001045f82e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d0420; end: 1045d0487;  */

char FUN_1045d0420(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0x10) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0x10);
  }
  return cVar1;
}



/* Entry: 1045d0488; end: 1045d04c7;  */

undefined1  [16] FUN_1045d0488(void)

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



/* Entry: 1045d04c8; end: 1045d04fb;  */

void FUN_1045d04c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045d04fc; end: 1045d0553;  */

undefined1  [16] FUN_1045d04fc(undefined8 *param_1)

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
  auVar4._0_8_ = FUN_1045d0554;
  return auVar4;
}



/* Entry: 1045d0554; end: 1045d0567;  */

void FUN_1045d0554(undefined8 *param_1,uint param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  return;
}



/* Entry: 1045d0568; end: 1045d0583;  */

void FUN_1045d0568(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045d0584; end: 1045d05b3;  */

undefined1  [16] FUN_1045d0584(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045d05b4; end: 1045d05e7;  */

void FUN_1045d05b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d05e8; end: 1045d06d7;  */

undefined8 FUN_1045d05e8(void)

{
  return 0x1045d05f8;
}



/* Entry: 1045d06d8; end: 1045d0717;  */

undefined1  [16] FUN_1045d06d8(void)

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



/* Entry: 1045d0718; end: 1045d074b;  */

void FUN_1045d0718(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045d074c; end: 1045d07a3;  */

undefined1  [16] FUN_1045d074c(undefined8 *param_1)

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
  auVar4._0_8_ = 0x104604a0c;
  return auVar4;
}



/* Entry: 1045d07a4; end: 1045d07b3;  */

bool FUN_1045d07a4(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 1045d07b4; end: 1045d07cf;  */

void FUN_1045d07b4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045d07d0; end: 1045d0837;  */

char FUN_1045d07d0(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0x28) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0x28);
  }
  return cVar1;
}



/* Entry: 1045d0838; end: 1045d0867;  */

undefined1  [16] FUN_1045d0838(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}


